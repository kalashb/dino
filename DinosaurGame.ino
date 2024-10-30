// Include Header Files
#include "Globals.h"
#include "Dinosaur.h"
#include "io.h"

// Drawing Bitmaps


// Variables
long timeMillis = 0;

void setup() {
  display.begin(0x02, SCREEN_ADDRESS);

  pinMode(BUTTON, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(2) , updateJump, FALLING);

  display.clearDisplay();
  display.display();
}

void loop() {
  display.clearDisplay();

  if (!dino.getJump()){
    dino.drawDino();
    display.display();
    delay(500);
  } else{
    dino.drawDino(15);
    display.display();
    delay(500);
    dino.setJump(false);
  }
}

// Functions


