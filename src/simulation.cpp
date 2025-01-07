#include "../include/simulation.h"
using namespace std;

atomic<bool> Simulation::running(true);

Simulation::Simulation() {
    signal(SIGINT, signalHandler);
}

void Simulation::signalHandler(int signum) {
cout << "Interrupt signal (" << signum << ") received.\n";
    running = false;
}

void Simulation::run() {
    cout << "Simulation Running...\n";
    trafficLight signalOne;
    road r;
    car carOne(r);

    
    
    while(running) {
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}

int main() {
    Simulation simulation;
    simulation.run();
    return 0;
}