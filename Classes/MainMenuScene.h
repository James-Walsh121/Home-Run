#ifndef __MAIN_MENU_SCENE_H__
#define __MAIN_MENU_SCENE_H__

#include "cocos2d.h"

 using namespace cocos2d;

class MainMenuScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	// implement the "static create()" method manually
	CREATE_FUNC(MainMenuScene);

private:
	virtual void GoToTheOptionsScene(Ref *sender);
	virtual void GoToGameScene(Ref *sender);
	virtual void menuCloseCallback(cocos2d::Ref* pSender);

};

#endif // __MAIN_MENU_SCENE_H__