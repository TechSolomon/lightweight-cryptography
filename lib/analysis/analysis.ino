// Solomon Himelbloom
// CS 665 Final Project
// Lightweight Cryptography
// Arduino IDE 2.1.0

// #include <Crypto.h>
#include "lwc.h"

void setup() {
  Serial.begin(9600);

  Serial.print("LWC Arduino\n");
  Serial.print("-=-=-=-=-=-=-=-=-=-=-\n");
  // Serial.print("Ready for commands.\n");
  // Serial.print("*: Clears buffer.\n");

  // Get the product of three integers multiplied together.
  int result = LWC::sample(8, 10, 12);
  Serial.println(result);
}

String buffer;

void clearBuffer() { buffer = ""; }

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

    case 'p':
      if (buffer == "help") {
        // Print a brief summary of supported commands.
        Serial.print("\nHelp Menu:\n");
        Serial.print("*: Clears buffer.\n");
        Serial.print("ok: Checks the Arduino status.\n");
        clearBuffer();
      }

    case 'k':
      //  Useful for checking if the Arduino is still alive.
      if (buffer == "ok") {
        Serial.print("OK\n");
        clearBuffer();
      }

    case 'e':
      Serial.print("Encrypted");
      clearBuffer();

    case 'i':
      Serial.print("Decrypted");
      clearBuffer();

    default:

    case 'd':
      Serial.print("");
    }
    delay(1000);
  }
}

void loop() {
  instructions();
}
