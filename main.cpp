#include<iostream>
#include<vector>
#include<thread>
#include<chrono>
using namespace std;

const int lengthOfRoad = 50;
vector<char> road(lengthOfRoad, '.');

class car {
    int positionOfCar = -1;
    int carID; //useless
    int carStatus = 0; //0 for stop, 1 for stop

    public:
    //function to get car status
    int getCarStatus() {
        return carStatus;
    }

    //function to move the car
    int moveCar() {
        if(carStatus && positionOfCar == (lengthOfRoad - 1)) {
            positionOfCar = 0;
        }
        else if(carStatus) {
            positionOfCar++;
        }
        return positionOfCar;
    }

    //function to change the status of the car
    int changeCarStatus() {
        if(carStatus) carStatus = 0;
        else carStatus = 1;
        return carStatus;
    }

};

class trafficLight {
    int status = 0; //0 for green, 1 for red
    public:
    void toggle() {
        if(status) status = 0;
        else status = 1;
    }

    string getStatus() {
        return (status == 0) ? "GREEN" : "RED";
    }
};

void displayRoad(car &car) {
    for(int i = 0; i < lengthOfRoad; i++) {
        
    }
}

int main() {
    trafficLight signalOne;
    car carOne;
    cout << "|";
    // for(int i = 0; i < lengthOfRoad; i++) {
    //     if(signalOne.getStatus() == "GREEN" && carOne.moveCar())
    // }
    cout << "|";
    cout << " " << signalOne.getStatus();
    return 0;
}