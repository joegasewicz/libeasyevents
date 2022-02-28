//
// Created by Joe Geezer on 27/02/2022.
//
#include <iostream>

#include "observer.h"
#include "subject.h"

Observer::Observer(std::string name) {
    name = name;
}

void Observer::update(Subject &s) {
    std::cout << "Observer: " << name << "receive update from: " << s.name << "\n";
}
