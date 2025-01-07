#ifndef CAR_H
#define CAR_H

#include "road.h"

class car {
    int positionOfCar = 0;
    int carID; 
    int carStatus = 1; //0 for stop, 1 for move
    int carSpeed;
    int lengthOfRoad;

    public:
    //constructor
    car(const road& r);

    //function to get car status
    int getCarStatus();

    //function to move the car
    int moveCar();

    //function to change the status of the car
    int changeCarStatus();

    //function to get the position of the car
    int getPositionOfCar();
};

#endif 