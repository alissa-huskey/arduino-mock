#ifndef Print_h
#define Print_h

#include <inttypes.h>
#include <stdio.h> // for size_t

#include "WString.h"

#define DEC 10
#define HEX 16
#define OCT 8
#define BIN 2
#define BYTE 0

class Print
{
  private:
    void printNumber(unsigned long, uint8_t);
    void printFloat(double, uint8_t);
  public:
#if ARDUINO >= 100
    virtual size_t write(uint8_t);
    virtual size_t write(const char*);
    virtual size_t write(const uint8_t*, size_t);
#else
    virtual void write(uint8_t);
    virtual void write(const char*);
    virtual void write(const uint8_t*, size_t);
#endif

    Print() {}
    ~Print() = default;
    virtual void print(const String &);
    virtual void print(const char[]);
    virtual void print(char);
    virtual void print(unsigned char, int);
    virtual void print(int, int);
    virtual void print(unsigned int, int);
    virtual void print(long, int);
    virtual void print(unsigned long, int);
    virtual void print(double, int);

    virtual void println(const String &s);
    virtual void println(const char[]);
    virtual void println(char);
    virtual void println(int, int);
    virtual void println(void);
};

#endif
