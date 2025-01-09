#ifndef SIMULATION_H
#define SIMULATION_H

#include <iostream>
#include <vector>
#include <csignal>
#include <thread>
#include <atomic>
#include <chrono>
#include "../include/road.h"
#include "../include/car.h"
#include "../include/trafficLight.h"

class Simulation {
    static std::atomic<bool> running;
    public:
    Simulation();
    void run();
    static void signalHandler(int signum);
    void displayRoad(road& r, car& c, trafficLight& t);
    void trafficLogic(car& c, trafficLight& t);
    void toggleTrafficLight(trafficLight &t, std::atomic<bool>& running);
};

#endif