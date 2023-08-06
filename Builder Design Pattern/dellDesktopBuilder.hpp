#ifndef DellDesktopBuilder_hpp
#define DellDesktopBuilder_hpp

#include "desktopBuilder.hpp"

class DellDesktopBuilder : public DesktopBuilder {
    void buildMonitor();
    void buildKeyBoard();
    void buildMouse();
};

#endif