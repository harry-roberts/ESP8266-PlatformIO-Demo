#include "Blinker.h"

Blinker::Blinker(int blinkPin, int delay)
{
    pinMode(blinkPin, OUTPUT);
    m_blinkPin = blinkPin;
    m_delay = delay;
}

void Blinker::writeHigh()
{
    digitalWrite(m_blinkPin, HIGH);
}

void Blinker::writeLow()
{
    digitalWrite(m_blinkPin, LOW);
}

void Blinker::runBlink()
{
    while(true)
    {
        writeHigh();
        delay(m_delay);
        writeLow();
        delay(m_delay);
    }
}