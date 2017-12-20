#ifndef _OBSERVER_H_
#define _OBSERVER_H_

template <typename T> class Subject;

template <typename T>
class Observer {

public:
    Observer() {}
    virtual void notify(Subject<T> &) = 0;
    virtual ~Observer() {}

};

#endif
