#ifndef  INFO_H_
#define _INFO_H_


struct Info {
    Info() {}
    virtual ~Info() {}
};


struct ControllerInfo {
    double distance;
};

struct SensorInfo {
    double distance;
};

#endif
