#include "Dinosaur.h"

Dinosaur::Dinosaur(){
  x = 5;
  y = 3;
  jump = false;
}

void Dinosaur::setJump(bool b){
  jump = b;
  return;
}

bool Dinosaur::getJump(){
  return jump;
}

void Dinosaur::drawDino(){
  display.drawBitmap(x, 63 - y - DINO_HEIGHT, dino_1, DINO_WIDTH, DINO_HEIGHT, 1);
  return;
}

void Dinosaur::drawDino(int y_){
  display.drawBitmap(x, 63 - y_ - DINO_HEIGHT - y, dino_1, DINO_WIDTH, DINO_HEIGHT, 1);
  return;
}