#include "StartScene.h"

cocos2d::Scene* StartScene::createScene(){
    return StartScene::create();
}

bool StartScene::init() {
    // always init parent first
    if ( !Scene::init() ) return false;

    cocos2d::Size visibleSize = cocos2d::Director::getInstance()->getVisibleSize();
    cocos2d::Vec2 origin = cocos2d::Director::getInstance()->getVisibleOrigin();

    return true;
}

void StartScene::menuCloseCallback(Ref* pSender)
{
    cocos2d::Director::getInstance()->end();
}