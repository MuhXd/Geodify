#include <Geode/Geode.hpp>
#include "../../SwelvyBG.hpp"
#include <HookClass.hpp>

using namespace geode::prelude;

HookClass(PackSelectLayer) {
    if (Mod::get()->getSettingValue<bool>("geode.texture-loader/PackSelectLayer")) {
        if (auto bg = this->getChildByID("background")) {
            bg->setVisible(false);
        }

        SwelvyBG* swelvyBG = SwelvyBG::create();
        swelvyBG->setZOrder(-1);
        
        this->addChild(swelvyBG);
    }
}