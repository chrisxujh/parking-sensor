#ifndef _SERVO_H_
#define _SERVO_H_

#include "monitor.h"

class ControllerInfo;

template <typename T> class Subject;

class Servo : public Monitor {
private:


public:
    Servo();
    ~Servo();

    void notify(Subject<ControllerInfo> &) override;
};

#endif
