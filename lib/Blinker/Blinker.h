#include <Arduino.h>

class Blinker
{
public:
    Blinker(int blinkPin, int delay);

    void runBlink();
    void writeHigh();
    void writeLow();

private:
    int m_blinkPin;
    int m_delay;
};

