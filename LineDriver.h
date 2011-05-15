#ifndef LINEDRIVER_H_
#define LINEDRIVER_H_

#include <inttypes.h>

class LineDriver
{
public:
    virtual void lineConfig(uint8_t pin, uint8_t mode) = 0;
    virtual void lineWrite(uint8_t pin, uint8_t value) = 0;
    virtual uint8_t lineRead(uint8_t pin) = 0;
};

class DefaultLineDriver: public LineDriver
{
public:
    virtual void lineConfig(uint8_t pin, uint8_t mode);
    virtual void lineWrite(uint8_t pin, uint8_t value);
    virtual uint8_t lineRead(uint8_t pin);

    static DefaultLineDriver* getInstance();

private:
    static DefaultLineDriver g_instance;
};

#endif // LINEDRIVER_H_
