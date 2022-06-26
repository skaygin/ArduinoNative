
// Inspired from FabioBatSilva/ArduinoFake

#include "Arduino.h"

void pinMode(uint8_t pin, uint8_t mode)
{
}

void digitalWrite(uint8_t pin, uint8_t val)
{
}

int digitalRead(uint8_t pin)
{
    return 0;
}

int analogRead(uint8_t pin)
{
    return 0;
}

void analogWrite(uint8_t pin, int val)
{
}

void analogReference(uint8_t mode)
{
}

unsigned long millis(void)
{
    return 0;
}

unsigned long micros(void)
{
    return 0;
}

void delay(unsigned long value)
{
}

void delayMicroseconds(unsigned int us)
{
}

unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout)
{
    return 0;
}

unsigned long pulseInLong(uint8_t pin, uint8_t state, unsigned long timeout)
{
    return 0;
}

void shiftOut(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, uint8_t val)
{
}

uint8_t shiftIn(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder)
{
    return 0;
}

void detachInterrupt(uint8_t interruptNum)
{
}

void attachInterrupt(uint8_t interruptNum, void (*userFunc)(void), int mode)
{
}

void cli(void)
{
}

void sei(void)
{
}

void tone(uint8_t pin, unsigned int frequency, unsigned long duration)
{
}

void noTone(uint8_t pin)
{
}

long random(long max)
{
    return 0;
}

long random(long min, long max)
{
    return 0;
}

void randomSeed(unsigned long seed)
{
}

long map(long value, long fromLow, long fromHigh, long toLow, long toHigh)
{
    return 0;
}

void yield()
{
}
