#include <Geode/Geode.hpp>
#include "../../SwelvyBG.hpp"
#include <HookClass.hpp> 
using namespace geode::prelude;
HookClass(DailyViewLayer) {
    if (Mod::get()->getSettingValue<bool>("cvolton.betterinfo/DailyViewLayer")) {
        if (auto bg = this->getChildByID("cvolton.betterinfo/background")) {
            bg->setVisible(false);
        }
        SwelvyBG* swelvyBG = SwelvyBG::create();
        swelvyBG->setZOrder(-1);
        
        this->addChild(swelvyBG);
    }
}
