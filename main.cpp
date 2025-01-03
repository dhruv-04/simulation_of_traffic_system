#include<iostream>
#include<vector>
#include<thread>
#include<chrono>
using namespace std;

const int lengthOfRoad = 50;
vector<char> road(lengthOfRoad, '.');

class car {
    int positionOfCar = 0;
    int carID; //useless
    int carStatus = 1; //0 for stop, 1 for move

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
        carStatus = !carStatus;
        return carStatus;
    }

    //function to get the position of the car
    int getPositionOfCar() {
        return positionOfCar;
    }
};

class trafficLight {
    int status = 0; //0 for green, 1 for red
    public:
    void toggle() {
        status = !status;
    }

    string getStatus() {
        return (status == 0) ? "GREEN" : "RED";
    }
};


void trafficLogic(trafficLight &trafficLight, car &car) {
    if(trafficLight.getStatus() == "GREEN" && car.getCarStatus()) car.moveCar();
    else if(trafficLight.getStatus() == "GREEN" && !car.getCarStatus()) {
        car.changeCarStatus();
        car.moveCar();
    }
    else if(trafficLight.getStatus() == "RED" && car.getCarStatus()) car.changeCarStatus();
}

void displayRoad(car &car, trafficLight &trafficLight) {
    cout << "|";
    for(int i = 0; i < lengthOfRoad; i++) {
        if(car.getPositionOfCar() == i) cout << "C";
        else cout << ".";
    }
    cout << "|" << trafficLight.getStatus();
    return;
}

int main() {
    trafficLight signalOne;
    car carOne;
    int count = 0;

    for(int i = 0; i < 100; i++) {
        displayRoad(carOne, signalOne);
        cout << "\n";
        if(count % 4 == 0) signalOne.toggle();
        trafficLogic(signalOne, carOne);
        this_thread::sleep_for(chrono::milliseconds(300));
        count++;
    }
    return 0;
}