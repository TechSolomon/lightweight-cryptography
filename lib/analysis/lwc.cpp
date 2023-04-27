/*
 * lwc.cpp - Library for flashing lightweight cryptography code.
 */

#include <Arduino.h>
#include "lwc.h"

LWC::LWC(int message) {
    _message = message;
}

void LWC::begin() {

}

void LWC::end() {

}

int LWC::sample(int a, int b, int c)
{
    return a * b * c;
}
