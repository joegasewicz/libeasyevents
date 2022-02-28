//
// Created by Joe Geezer on 27/02/2022.
//



#ifndef TICKET_MANAGER_OBSERVER_H
#define TICKET_MANAGER_OBSERVER_H

#include <iostream>
template<typename T>
class Subject;

class Observer {

public:
    explicit Observer(std::string name);
    std::string type;
    virtual void update(Subject<std::string> &s);
    std::string name;
};


#endif //TICKET_MANAGER_OBSERVER_H
