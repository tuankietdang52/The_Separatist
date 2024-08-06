//
// Created by ADMIN on 8/7/2024.
//

#include "Player.h"

#pragma region Get_Set

void Player::setHealth(float health){
    mHealth = health;
}

void Player::setMaxHealth(float maxHealth){
    mMaxHealth = maxHealth;
}

void Player::setArmor(float armor){
    mArmor = armor;
}

void Player::setSpeed(float speed){
    mSpeed = speed;
}

void Player::setSprite(std::string fileName){
    mSprite = cocos2d::Sprite::create(fileName);

    if (mSprite == nullptr){
        printf("cannot load Sprite\n file name: fileName");
    }
}

void Player::setPosition(const cocos2d::Vec2& position){
    mSprite->setPosition(position);
}

float Player::getHealth(){
    return mHealth;
}

float Player::getMaxHealth(){
    return mMaxHealth;
}

float Player::getArmor(){
    return mArmor;
}

float Player::getSpeed(){
    return mSpeed;
}

// 
const cocos2d::Vec2& Player::getPosition() const{
    return mSprite->getPosition();
}

cocos2d::Sprite* Player::getSprite(){
    return mSprite;
}

#pragma endregion Get_Set

Player::Player() {
    mMaxHealth = 0;
    mHealth = mMaxHealth;
    mArmor = 0;
    mSpeed = 0;
}

bool Player::init(){
    if (!cocos2d::Sprite::init()) return false;
    return true;
}