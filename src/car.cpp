#include "../include/car.h"
#include "../include/road.h"

car::car(const road& r) {
    lengthOfRoad = r.getRoadLength();
}

int car::getCarStatus() {
    return carStatus;
}

int car::moveCar() {
        if(carStatus && positionOfCar == (lengthOfRoad - 1)) {
            positionOfCar = 0;
        }
        else if(carStatus) {
            positionOfCar++;
        }
        return positionOfCar;
}

int car::changeCarStatus() {
    carStatus = !carStatus;
    return carStatus;
}

int car::getPositionOfCar() {
    return positionOfCar;
}
