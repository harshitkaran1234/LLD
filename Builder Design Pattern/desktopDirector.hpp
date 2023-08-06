#ifndef desktopDirector_hpp
#define desktopDirector_hpp

#include "desktopBuilder.hpp"

class DesktopDirector {
    DesktopBuilder* desktopBuilder;
    public:
        DesktopDirector(DesktopBuilder* pDesktopBuilder){
            desktopBuilder = pDesktopBuilder;
        }

        Desktop* getDesktop(){
            return desktopBuilder->getDesktop();
        }

        Desktop *BuildDesktop(){
            desktopBuilder -> buildMonitor();
            desktopBuilder -> buildMouse();
            desktopBuilder -> buildKeyBoard();
            return desktopBuilder->getDesktop();
        }
};

#endif