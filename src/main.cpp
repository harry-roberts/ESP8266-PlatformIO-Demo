#include <Arduino.h>

#include "Blinker.h"

// The Arduino framework internally defines the main() function, which
// calls setup() once and loop() on repeat
// Tricky to remove this behaviour, so just treat setup() as this 
// program's main() and leave loop() blank

void setup()
{
    Blinker b1(LED_BUILTIN, 500);
    b1.runBlink();
}

void loop() {}
