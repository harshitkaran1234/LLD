#include "hpDesktopBuilder.hpp"

void HpDesktopBuilder :: buildMonitor(){
    desktop-> setMonitor("HP monitor");
}

void HpDesktopBuilder :: buildKeyBoard(){
    desktop-> setKeyboard("HP keyboard");
}

void HpDesktopBuilder :: buildMouse(){
    desktop-> setMouse("HP mouse");
}