#include "../include/road.h"

road::road() {
    lengthOfRoad = 60;
}

int road::getRoadLength() const {
    return lengthOfRoad;
}

void road::setLengthOfRoad(int length) {
    lengthOfRoad = length;
}