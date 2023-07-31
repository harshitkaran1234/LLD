#ifndef car_hpp
#define car_hpp

#include<iostream>
using namespace std;

#include "vehicle.hpp"

class Car: public Vehicle{
    public:
        void createVehicle(){
            cout<<"Creating car"<<endl;
        }
};

#endif