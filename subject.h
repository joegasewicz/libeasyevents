//
// Created by Joe Geezer on 27/02/2022.
//

#ifndef TICKET_MANAGER_SUBJECT_H
#define TICKET_MANAGER_SUBJECT_H

#include "observer.h"
#include <vector>

template <typename T>
class Subject {

public:

    std::string name;

    explicit Subject(std::string name);

    void attach(const Observer &o);

    void detach(Observer &o);

    void notify();

    void update_state(std::string type, T data);


private:
    int _state;

    std::vector<Observer> _observers = {};
};




#endif //TICKET_MANAGER_SUBJECT_H
