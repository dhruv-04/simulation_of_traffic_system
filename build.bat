@echo off

if not exist build (
    mkdir build
)

g++ -fdiagnostics-color=always -g src/car.cpp src/road.cpp src/trafficLight.cpp src/simulation.cpp -o build/simulation.exe
