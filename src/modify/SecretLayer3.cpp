#include "../SwelvyBG.hpp"
#include <Geode/Geode.hpp>
#include <Geode/modify/SecretLayer3.hpp>

using namespace geode::prelude;

class $modify(MySecretLayer3, SecretLayer3) {
	bool init() {
		if (!SecretLayer3::init()) {
			return false;
		}
		if (Mod::get()->getSettingValue<bool>("show-basement")){
			if (auto bg = this->getChildByID("background")) {
				bg->setVisible(false);
				auto swelvyBG = SwelvyBG::create();
				swelvyBG->setZOrder(-3);
				swelvyBG->setID("swelvy-background");
	
				this->addChild(swelvyBG);				
			}
		}
		return true;
	}
};