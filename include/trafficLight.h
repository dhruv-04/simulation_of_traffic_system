#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

class trafficLight {
    int status; //0 for GREEN and 1 for RED
    public:

    trafficLight(); //construtor to set the default value of signal

    void toggle(); //toggle the status of the signla
    
    int getStatus(); //function to check for the status of the signal
};

#endif