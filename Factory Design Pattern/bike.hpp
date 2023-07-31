#ifndef bike_hpp
#define bike_hpp

#include<iostream>
using namespace std;

#include "vehicle.hpp"

class Bike : public Vehicle{
    public: 
        void createVehicle(){
            cout<<"Creating bike"<<endl;
        }
};

#endif