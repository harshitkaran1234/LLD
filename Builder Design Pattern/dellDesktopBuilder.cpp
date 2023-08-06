#include "dellDesktopBuilder.hpp"

void DellDesktopBuilder :: buildMonitor(){
    desktop-> setMonitor("Dell monitor");
}

void DellDesktopBuilder :: buildKeyBoard(){
    desktop-> setKeyboard("Dell keyboard");
}

void DellDesktopBuilder :: buildMouse(){
    desktop-> setMouse("Dell mouse");
}