#ifndef _SENSOR_H_
#define _SENSOR_H_

#include "subject.h"

class Info;

class Sensor : public Subject {


public:
    Sensor();
    virtual ~Sensor();

    virtual Info getInfo() = 0;
};

#endif
