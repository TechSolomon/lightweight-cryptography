// Solomon Himelbloom
// CS 665 Final Project
// Lightweight Cryptography
// Arduino IDE 2.1.0

#include "Crypto.h"
#include "lwc.h"
#include "SHA256.h"
#include "string.h"

// System Diagnostics
int key = 128;
int nonce = 1234567890;
int tag = 128;
int block = 64;
int aead = 1;
int rounds = 12;  // or 6
bool varient = false;

void setup() {
  Serial.begin(9600);

  Serial.print("LWC Arduino Testbench\n");
  Serial.print("-=-=-=-=-=-=-=-=-=-=-\n");
  Serial.print("Ready for commands.\n");
  Serial.print("*: Clears buffer.\n");
}

String buffer;

void clearBuffer() {
  buffer = "";
}

// Sample Message I/O
String plaintext = "Lightweight Cryptography";
String ciphertext =
  "f7efb0761ca6f93f7c88c53a063eafbe021b5c2f4e86f4075159957455806528";

void sample() {
  // Get the product of three integers multiplied together.
  int result = LWC::sample(8, 10, 12);
  Serial.println(result);

  // Encrypt the plaintext above using the SHA256 algorithm.

  // SHA256::reset();
}

void encrypt() {
  Serial.println("Input Value: " + plaintext);

}

void decrypt() {
  Serial.println("Output Value: " + ciphertext);
}

void permutation() {
  // TODO: Sponge-based?
  return 0;
}

// Takes project commands from user input.
void instructions() {
  while (Serial.available()) {
    char c = Serial.read();
    buffer += c;

    switch (c) {
      // Manual Buffer Clear
      case '*':
        Serial.print("Clearing Buffer...\n");
        Serial.print("Current Buffer:" + buffer + "\n");
        clearBuffer();
        Serial.print("Buffer Cleared!\n");

      case 'h':
        // Print a brief summary of supported commands.
        Serial.print("\nHelp Menu:\n");
        Serial.print("*: Clears buffer.\n");
        Serial.print("ok: Checks the Arduino status.\n");
        clearBuffer();

      case 'k':
        //  Useful for checking if the Arduino is still alive.
        Serial.print("OK\n");
        clearBuffer();

      case 'i':
        // Input
        encrypt();
        clearBuffer();

      case 'o':
        // Output
        decrypt();
        clearBuffer();

      default:

      case 'd':
        // New Line
        Serial.print("\n");
    }
    delay(1000);
  }
}

void loop() {
  instructions();
}
