#ifndef desktop_hpp
#define desktop_hpp

#include<string>
using namespace std;

class Desktop{
    string monitor;
    string keyboard;
    string mouse;

    public:
        void setMonitor(string pMonitor);
        void setKeyboard(string pKeyBoard);
        void setMouse(string pMouse);
        void showSpecs();
};

#endif
