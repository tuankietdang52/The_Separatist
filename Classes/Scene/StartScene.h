//
// Created by ADMIN on 8/4/2024.
//
#ifndef PROJ_ANDROID_STARTSCENE_H

#define PROJ_ANDROID_STARTSCENE_H

#include "cocos2d.h"

class StartScene : public cocos2d::Scene{
public:
    static cocos2d::Scene* createScene();

    bool init() override;

    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);

    CREATE_FUNC(StartScene)
};


#endif //PROJ_ANDROID_STARTSCENE_H