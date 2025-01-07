#ifndef ROAD_H
#define ROAD_H

class road{
    int lengthOfRoad;
    public:
    
    road(); //initialize the lengthOfRoad variable with defaul value of 60

    int getRoadLength() const; //function to get the length of the road

    void setLengthOfRoad(int length); //function to set the length of the road
};

#endif