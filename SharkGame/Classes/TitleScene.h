#pragma once

#include "cocos2d.h"

// �^�C�g���V�[��
class TitleScene : public cocos2d::Scene
{
public:
	// create�֐��̐錾�ƒ�`
	//CREATE_FUNC(TitleScene);
	static TitleScene* create();

	bool init();

	void update(float delta) override;
	bool onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * pEvent);
	void onButtonClick(Ref* ref);
	
	cocos2d::Sprite* sprite = nullptr;
};