#pragma once

#include "cocos2d.h"

// �^�C�g���V�[��
class ResultScene : public cocos2d::Scene
{
public:
	// create�֐��̐錾�ƒ�`
	//CREATE_FUNC(StaffRollScene);
	static ResultScene* create();

	bool init();

	void update(float delta) override;
};