#include "LineDriver.h"
#include <inttypes.h>
#include "WProgram.h"

DefaultLineDriver DefaultLineDriver::g_instance;


void DefaultLineDriver::lineConfig(uint8_t pin, uint8_t mode)
{
    pinMode(pin, mode);
}


void DefaultLineDriver::lineWrite(uint8_t pin, uint8_t value)
{
    digitalWrite(pin, value);
}


uint8_t DefaultLineDriver::lineRead(uint8_t pin)
{
    return digitalRead(pin);
}


DefaultLineDriver* DefaultLineDriver::getInstance()
{
    return &g_instance;
}
