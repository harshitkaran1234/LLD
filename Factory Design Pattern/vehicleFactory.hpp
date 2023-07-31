#ifndef factory_hpp
#define factory_hpp

#include<iostream>
using namespace std;

#include "bike.hpp"
#include "car.hpp"

class vehicleFactory{
    public:
        static Vehicle* getVehicle(string vehicleType){
            Vehicle *vehicle;
            if(vehicleType == "car"){
                vehicle = new Car();
            }
            else if(vehicleType == "bike"){
                vehicle = new Bike();
            }
            return vehicle;
        }
};

#endif