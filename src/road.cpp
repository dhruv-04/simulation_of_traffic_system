#include "../include/road.h"
#include <vector>

road::road() : lengthOfRoad(60), roadDisplay(60, '.') {};

int road::getRoadLength() const {
    return lengthOfRoad;
}

void road::setLengthOfRoad(int length) {
    lengthOfRoad = length;
}

std::vector<char> road::returnPath() {
    return roadDisplay;
}