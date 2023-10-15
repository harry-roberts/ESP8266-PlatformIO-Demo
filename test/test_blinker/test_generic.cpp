#include <Arduino.h>
#include <gtest/gtest.h>

// Individual tests, e.g. for simple functionality with no shared setup

TEST(generic, digitalLow)
{
    Serial.println();
    pinMode(4, OUTPUT);
    digitalWrite(4, LOW);
    EXPECT_EQ(digitalRead(4), 0);
}

TEST(generic, digitalHigh)
{
    Serial.println();
    pinMode(5, OUTPUT);
    digitalWrite(5, HIGH);
    EXPECT_EQ(digitalRead(5), 1);
}
