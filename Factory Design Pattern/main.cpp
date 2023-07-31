#include<iostream>
using namespace std;

// #include "bike.hpp"
// #include "car.hpp"
#include "vehicleFactory.hpp"

int main(){
    string vehicleType;
    cin>>vehicleType;
    // Vehicle *vehicle;
    // if(vehicleType == "car"){
    //     vehicle = new Car();
    // }
    // else if(vehicleType == "bike"){
    //     vehicle = new Bike();
    // }
    // vehicle->createVehicle();
    //This code is tightly coupled, because everytime new vehivle is created, 
    //its class should be imported and if else condition needs to be added.
    Vehicle *vehicle = vehicleFactory :: getVehicle(vehicleType);
    vehicle->createVehicle();
}


//client uses the factory to create product

