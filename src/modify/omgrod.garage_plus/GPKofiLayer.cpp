#include <Geode/Geode.hpp>
#include "../../SwelvyBG.hpp"
#include <HookClass.hpp> 

using namespace geode::prelude;
HookClass(GPKofiLayer) {
    if (Mod::get()->getSettingValue<bool>("omgrod.garage_plus/GPKofiLayer")) {
        if (auto bg = this->getChildByID("background")) {
            bg->setVisible(false);
        }

        SwelvyBG* swelvyBG = SwelvyBG::create();
        swelvyBG->setZOrder(-99999);
        
        this->addChild(swelvyBG);
    }
}