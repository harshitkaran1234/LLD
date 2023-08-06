#ifndef HpDesktopBuilder_hpp
#define HpDesktopBuilder_hpp

#include "desktopBuilder.hpp"

class HpDesktopBuilder : public DesktopBuilder {
    void buildMonitor();
    void buildKeyBoard();
    void buildMouse();
};

#endif