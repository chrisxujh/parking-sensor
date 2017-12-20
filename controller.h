#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

#include "observer.h"
#include "subject.h"
#include <memory>

class Sensor;
class Monitor;
class SensorInfo;
class ControllerInfo;

struct ControllerTemp {
    double distance;
};

class Controller : public Observer<SensorInfo>, public Subject<ControllerInfo> {
    std::unique_ptr<ControllerTemp> temp;

public:
    Controller();
    ~Controller();

    void addSensor(Sensor *);
    void addMonitor(Monitor *);
    void init();
    void notify(Subject<SensorInfo> &) override;
    ControllerInfo getInfo() override;
};


#endif
