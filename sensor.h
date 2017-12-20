#ifndef _SENSOR_H_
#define _SENSOR_H_

#include "subject.h"

class SensorInfo;

class Sensor : public Subject<SensorInfo> {

public:
    Sensor();
    virtual ~Sensor();

    virtual SensorInfo getInfo() = 0;
};

#endif
