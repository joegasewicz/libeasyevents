//
// Created by Joe Geezer on 27/02/2022.
//

#include "subject.h"
#include <iostream>
#include <string>


Subject::Subject(std::string name)
{
    name = name;
    _state = {};
};

void Subject::attach(const Observer &o) {
    std::cout << "Subject adding an observer\n";
    _observers.push_back(o);
}

void Subject::detach(Observer &o) {
    std::cout << "Subject removing observer";
    for (const auto& obs : _observers)
    {
        std::cout << "here-----> " << obs.type << "\n";
    }
}

void Subject::notify() {
    for (Observer obs : _observers)
    {
        std::cout << "Notifying ...\n";
        obs.update(*this);
    }
}
