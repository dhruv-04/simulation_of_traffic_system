#include "../include/trafficLight.h"

trafficLight::trafficLight(){
    status = 0;
};

int trafficLight::getStatus() {
    return status;
}

void trafficLight::toggle() {
    status = !status;
}