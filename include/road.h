#ifndef ROAD_H
#define ROAD_H
#include <vector>

class road{
    int lengthOfRoad;
    std::vector<char> roadDisplay;
    public:
    
    road(); //initialize the lengthOfRoad variable with defaul value of 60

    int getRoadLength() const; //function to get the length of the road

    void setLengthOfRoad(int length); //function to set the length of the road

    std::vector<char> returnPath();
};

#endif