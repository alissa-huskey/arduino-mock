#include "arduino-mock/Print.h"

#if ARDUINO >= 100
size_t Print::write(uint8_t) {}
size_t Print::write(const char*) {}
size_t Print::write(const uint8_t*, size_t) {}
#else
void Print::write(uint8_t) {}
void Print::write(const char*) {}
void Print::write(const uint8_t*, size_t) {}
#endif

void Print::printNumber(unsigned long, uint8_t) {
}

void Print::printFloat(double, uint8_t) {
}

void Print::print(const String &) {
}

void Print::print(const char[]) {
}

void Print::print(char) {
}

void Print::print(unsigned char, int) {
}

void Print::print(int, int) {
}

void Print::print(unsigned int, int) {
}

void Print::print(long, int) {
}

void Print::print(unsigned long, int) {
}

void Print::print(double, int) {
}

void Print::println(const String &s) {
}

void Print::println(const char[]) {
}

void Print::println(char) {
}

void Print::println(int, int) {
}

void Print::println(void) {
}
