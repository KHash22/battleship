#include <stdio.h>
#include <string>
#include "ship.hpp"

// Class Constructor
Ship::Ship(std::string n, char t, int tm, int sz): 
    name(n), ticker(t), size(sz), team(tm), alive(true) {}

bool Ship::shipHit() {
    if ((size-1) == 0) {
        size--;
        alive = false;
        return alive;
    }
    else {
        size--;
        return alive;
    }
}

bool Ship::getHealth() const {
    return alive;
}

char Ship::getTicker() const {
    return ticker;
}