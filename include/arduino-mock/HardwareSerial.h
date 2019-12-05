#ifndef __SERIAL_H
#define __SERIAL_H

#include "WString.h"
#include "arduino-mock/Serial.h"

namespace {
  SerialMock* serialMock = serialMockInstance();
}

#endif

