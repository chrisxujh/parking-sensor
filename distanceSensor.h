#ifndef _DISTANCE_SENSOR_H_
#define _DISTANCE_SENSOR_H_

#include "sensor.h"

class Info;

class DistanceSensor : public Sensor {


public:
    DistanceSensor();
    ~DistanceSensor();

    Info getInfo() override;
};

#endif
