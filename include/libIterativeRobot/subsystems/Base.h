#ifndef _SUBSYSTEMS_BASE_H_
#define _SUBSYSTEMS_BASE_H_

#include "./Subsystem.h"
#include "api.h"

#include "abstractBaseClasses/Motor.h"

class Base : public libIterativeRobot::Subsystem {
  private:
    Motor* leftFrontBaseMotor;
    Motor* leftBackBaseMotor;
    Motor* rightFrontBaseMotor;
    Motor* rightBackBaseMotor;

    bool baseReversed = false;
    bool baseSlow = false;
  public:
    void initDefaultCommand();
    void toggleBase();
    void toggleBaseSpeed();
    void moveBase(int left, int right);
    void moveBaseTo(int leftTarget, int rightTarget);
    bool baseAtTarget();
    Base();
};

#endif // _SUBSYSTEMS_BASE_H_
