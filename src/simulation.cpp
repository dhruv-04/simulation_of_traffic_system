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

void Simulation::trafficLogic(car& c, trafficLight& t) {
    if(t.getStatus() == 0 && c.getCarStatus()) c.moveCar();
    else if(t.getStatus() == 0 && !c.getCarStatus()) {
        c.changeCarStatus();
        c.moveCar();
    }
    else if(t.getStatus() == 1 && c.getCarStatus()) c.changeCarStatus();    
}

void Simulation::displayRoad(road &r, car &c, trafficLight &t) {
    int lengthOfRoad = r.getRoadLength();
    vector<char> path = r.returnPath();
    string getStatusOfSignal = (t.getStatus() == 1) ? "RED" : "GREEN"; 
    int position = c.getPositionOfCar();
    cout << "|";
    for(int i = 0; i < lengthOfRoad; i++) {
        if(position == i) cout << "C";
        else cout << path[i];
    }
    cout << "| " << getStatusOfSignal << "\n";
}

void Simulation::toggleTrafficLight(trafficLight& t, atomic<bool>& running) {
    while(running) {
        this_thread::sleep_for(chrono::milliseconds(300));
        t.toggle();
    }
}

void Simulation::run() {
    cout << "Simulation Running...\n";
    trafficLight signalOne;
    road r;
    car carOne(r);

    thread signalThread(&Simulation::toggleTrafficLight, this, ref(signalOne), ref(running));
    
    while(running) {
        displayRoad(r, carOne, signalOne);
        trafficLogic(carOne, signalOne);
        this_thread::sleep_for(chrono::milliseconds(300));
    }

    if(signalThread.joinable()) signalThread.join();
}

int main() {
    Simulation simulation;
    simulation.run();
    return 0;
}