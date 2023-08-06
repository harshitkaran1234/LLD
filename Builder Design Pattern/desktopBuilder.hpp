#ifndef desktopBuild_hpp
#define desktopBuild_hpp

#include "desktop.hpp"

class DesktopBuilder {
    protected:
        Desktop* desktop;
    
    public:
        DesktopBuilder(){
            desktop = new Desktop();
        }
        virtual void buildMonitor() = 0;
        virtual void buildKeyBoard() = 0;
        virtual void buildMouse() = 0;
        virtual Desktop* getDesktop(){
            return desktop;
        }
};

#endif