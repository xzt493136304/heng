#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "Hero.h"

class HelloWorld : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
    cocos2d::Point tileCoordForPosition(cocos2d::Point position);
    void setPlayerPosition(cocos2d::Point position);
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    void onTouchesBegan(const std::vector<cocos2d::Touch*>& touch, cocos2d::Event *event);
    void onTouchesEnded(const std::vector<cocos2d::Touch*>& touch, cocos2d::Event *event);
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
    
private:
    cocos2d::TMXTiledMap *_map;
    cocos2d::TMXLayer *_meta;
//    cocos2d::Sprite *_player;
    Hero *hero;
    int herox;
    void onKeyReleased(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event);
    void onKeyPressed(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event);
    
};

#endif // __HELLOWORLD_SCENE_H__
