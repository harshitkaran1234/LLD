#include<iostream>
#include "logger.hpp" 
#include<thread>
using namespace std;

int Logger::ctr = 0;
Logger* Logger :: loggerInstance = nullptr;
mutex Logger::mtx;

void user1logs(){
    Logger *logger1 = Logger :: getLogger(); 
    logger1->log("this msg is from user1"); 
}

void user2logs(){
    Logger *logger2 = Logger :: getLogger(); 
    logger2->log("this msg is from user2");
}

int main(){
    thread t1(user1logs);
    thread t2(user2logs);
    t1.join();
    t2.join();

    // Logger *logger1 = Logger :: getLogger(); 
    // logger1->log("this msg is from user1");

    // Logger *logger2 = Logger :: getLogger(); 
    // logger2->log("this msg is from user2");
}