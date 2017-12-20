#ifndef _MONITOR_H_
#define _MONITOR_H_

#include "observer.h"
class ControllerInfo;

class Monitor : public Observer<ControllerInfo> {

public:
    Monitor();
    virtual ~Monitor();

    virtual void notify(Subject<ControllerInfo> &) = 0;

};

#endif
