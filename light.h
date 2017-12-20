#ifndef _LIGHT_H_
#define _LIGHT_H_

#include "monitor.h"

class ControllerInfo;

template <typename T> class Subject;

class Light : public Monitor {
private:
    void greenInfo();
    void off();

public:
    Light();
    ~Light();

    void notify(Subject<ControllerInfo> &) override;
};

#endif
