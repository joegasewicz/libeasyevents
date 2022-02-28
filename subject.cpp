//
// Created by Joe Geezer on 27/02/2022.
//

#include "subject.h"
#include <iostream>
#include <string>

template<typename T>
Subject<T>::Subject(std::string name)
{
    name = name;
    _state = {};
};

template<typename T>
void Subject<T>::attach(const Observer &o) {
    std::cout << "Subject adding an observer\n";
    _observers.push_back(o);
}

template<typename T>
void Subject<T>::detach(Observer &o) {
    std::cout << "Subject removing observer";
    for (const auto& obs : _observers)
    {
        std::cout << "here-----> " << obs.type << "\n";
    }
}

template<typename T>
void Subject<T>::notify() {
    for (Observer obs : _observers)
    {
        std::cout << "Notifying ...\n";
        obs.update(*this);
    }
}

template<typename T>
void Subject<T>::update_state(std::string type, T data) {
    // update the T with type
}
