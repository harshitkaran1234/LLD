#include "desktop.hpp"
#include <iostream>

void Desktop :: setMonitor(string pMonitor){
    monitor = pMonitor;
}

void Desktop :: setKeyboard(string pKeyboard){
    keyboard = pKeyboard;
}

void Desktop :: setMouse(string pMouse){
    mouse = pMouse;
}

void Desktop :: showSpecs(){
    cout<<"---------------------------------------"<<endl;
    cout<<"Monitor "<<monitor<<endl;
    cout<<"keyboard "<<keyboard<<endl;
    cout<<"Mouse "<<mouse<<endl;
    cout<<"---------------------------------------"<<endl;
}


