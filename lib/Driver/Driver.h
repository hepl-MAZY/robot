#ifndef DRIVER_H
#define DRIVER_H

#include "Arduino.h"

class Driver {
  public:
    // Constructor
    Driver(int leftIn1, int leftIn2, int rightIn1, int rightIn2);

    // Motor movement functions
    void rampForwardLEFT(int pwmSpeed);
    void stopLEFT(int pwmSpeed);
    void rampBackwardLEFT(int pwmSpeed);
    void rampForwardRIGHT(int pwmSpeed);
    void stopRIGHT(int pwmSpeed);
    void rampBackwardRIGHT(int pwmSpeed);

  private:
    int _leftIn1, _leftIn2;
    int _rightIn1, _rightIn2;
};

#endif
