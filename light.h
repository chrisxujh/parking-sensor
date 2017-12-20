#ifndef _LIGHT_H_
#define _LIGHT_H_

#include "monitor.h"

class ControllerInfo;

template <typename T> class Subject;

class Light : public Monitor {
private:
    void alarm();

public:
    Light();
    ~Light();

    void notify(Subject<ControllerInfo> &) override;
};

#endif
