#include "Blinker.h"
#include <gtest/gtest.h>

// Test fixture, for multiple tests that use the same data/config

class BlinkerTest : public ::testing::Test
{
protected:
    void SetUp() override
    {
        // Serial output required - see note in main
        // new line also helps with test formatting in serial monitor
        Serial.println();
    }

    Blinker b1 = Blinker(LED_BUILTIN, 500);
};

TEST_F(BlinkerTest, ledPin)
{
    EXPECT_EQ(LED_BUILTIN, 2);
}

TEST_F(BlinkerTest, low)
{
    Serial.println("test message - only visible in verbose test: pio test --verbose");
    b1.writeLow();
    EXPECT_EQ(digitalRead(LED_BUILTIN), 0);
}

TEST_F(BlinkerTest, high)
{
    b1.writeHigh();
    EXPECT_EQ(digitalRead(LED_BUILTIN), 1);
}