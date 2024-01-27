#include <Geode/Geode.hpp>
#include <Geode/modify/CreatorLayer.hpp>

using namespace geode::prelude;

class $modify(CreatorLayer) {
	void onTopLists(cocos2d::CCObject*) {
		auto thySearch = GJSearchObject::create(SearchType::MyLists);
		auto layer = LevelBrowserLayer::scene(thySearch); 
		auto freshFade = CCTransitionFade::create(0.5, layer);
		CCDirector::sharedDirector()->pushScene(freshFade);
	}
};