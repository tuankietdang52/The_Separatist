#include "StartScene.h"
#include "Entity/Ally/Terrorist.h"

cocos2d::Scene* StartScene::createScene(){
    return StartScene::create();
}

bool StartScene::init() {
    // always init parent first
    if ( !Scene::init() ) return false;

    cocos2d::Size size = cocos2d::Director::getInstance()->getVisibleSize();
    cocos2d::Vec2 ori = cocos2d::Director::getInstance()->getVisibleOrigin();

    Terrorist* player = Terrorist::create();
    player->setPosition(cocos2d::Vec2(size.width / 2 + ori.x, size.height / 2 + ori.y));
    this->addChild(player->getSprite(), 0);

//    auto sprite = cocos2d::Sprite::create("sprites/separatist/separatist.png");

    return true;
}

void StartScene::menuCloseCallback(Ref* pSender)
{
    cocos2d::Director::getInstance()->end();
}