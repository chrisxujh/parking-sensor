#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include <vector>

class Info;
class Observer;

class Subject {
private:
    std::vector<Observer*> observers;

public:
    Subject();
    virtual ~Subject();

    virtual Info getInfo() = 0;
    void attachObserver(Observer *);
    void notifyObservers();
};

#endif
