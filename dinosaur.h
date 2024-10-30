#ifndef DINOSAUR_H
#define DINOSAUR_H

#include "Globals.h"

class Dinosaur{
  private:
    // Location
    int x;
    int y;

    // Variables
    bool jump;

  public:
    Dinosaur();
    void setJump(bool b);
    bool getJump();
    void drawDino();
    void drawDino(int y_);
};

inline Dinosaur dino;

#endif 