#pragma once

#include "cocos2d.h"

// �^�C�g���V�[��
class PlayScene : public cocos2d::Scene
{
public:
	// create�֐��̐錾�ƒ�`
	/*CREATE_FUNC(PlayScene);*/
	static PlayScene* create();

	bool init();

	void update(float delta) override;
	bool onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * pEvent);
};