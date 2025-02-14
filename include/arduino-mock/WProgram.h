#ifndef WProgram_h
#define WProgram_h

#include "Wire.h"
#include "wiring.h"
#include "Print.h"

class __FlashStringHelper;

#ifndef PROGMEM
#define PROGMEM
#endif

#ifdef __cplusplus

uint16_t makeWord(uint16_t w);

#define word(...) makeWord(__VA_ARGS__)

unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout = 1000000L);

void tone(uint8_t _pin, unsigned int frequency, unsigned long duration = 0);
void noTone(uint8_t _pin);

// WMath prototypes
long random(long);
long random(long, long);
void randomSeed(unsigned int);
long map(long, long, long, long, long);

#endif

#endif
