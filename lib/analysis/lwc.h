/*
 * lwc.h - Library for flashing lightweight cryptography code.
 */

#ifndef LIB_LWC_H
#define LIB_LWC_H

#include <Arduino.h>

class LWC {
public:
    explicit LWC(int message);
    void begin();
    void end();
    static int sample(int a, int b, int c);
private:
    int _message;
};

#endif //LIB_LWC_H
