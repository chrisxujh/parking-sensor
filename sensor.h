#ifndef _SENSOR_H_
#define _SENSOR_H_

#include "subject.h"

class Sensor : public Subject {


public:
    Sensor(arguments);
    virtual ~Sensor ();
};

#endif
