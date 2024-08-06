#ifndef PROJ_ANDROID_PLAYER_H
#define PROJ_ANDROID_PLAYER_H

#include "cocos2d.h"

class Player : public cocos2d::Sprite{
private:
    float mHealth;
    float mMaxHealth;
    float mArmor;
    float mSpeed;

    cocos2d::Sprite* mSprite;

public:
#pragma region Get_Set

    void setHealth(float health);
    void setMaxHealth(float maxHealth);
    void setArmor(float armor);
    void setSpeed(float speed);
    void setSprite(std::string fileName);
    void setPosition(const cocos2d::Vec2& position) override;

    float getHealth();
    float getMaxHealth();
    float getArmor();
    float getSpeed();
    cocos2d::Sprite* getSprite();
    const cocos2d::Vec2& getPosition() const override;

#pragma endregion Get_Set
    Player();
    bool init() override;

    CREATE_FUNC(Player);
};

#endif //PROJ_ANDROID_PLAYER_H
