#include <Geode/Geode.hpp>
#include "../../SwelvyBG.hpp"
#include <HookClass.hpp> 

using namespace geode::prelude;
HookClass_Scene(cvolton_betterinfo_LevelSearchViewLayer,"cvolton.betterinfo/LevelSearchViewLayer") {
    if (Mod::get()->getSettingValue<bool>("cvolton.betterinfo/LevelSearchViewLayer")) {
        if (auto bg = _This->getChildByID("cvolton.betterinfo/background")) {
            bg->setVisible(false);
        }
        SwelvyBG* swelvyBG = SwelvyBG::create();
        swelvyBG->setZOrder(-1);
        
        _This->addChild(swelvyBG);
    }
}