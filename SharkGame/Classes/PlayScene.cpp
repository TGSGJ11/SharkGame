#include "PlayScene.h"
#include "TitleScene.h"
#include "ResultScene.h"

USING_NS_CC;

PlayScene* PlayScene::create()
{
	PlayScene *pRet = new(std::nothrow) PlayScene();
	if (pRet && pRet->init())
	{
		pRet->autorelease();
		return pRet;
	}
	else
	{
		delete pRet;
		pRet = nullptr;
		return nullptr;
	}
}

// ������
bool PlayScene::init()
{
	// ���N���X�̏�����
	if (!Scene::init())
	{
		// ���N���X�̏����������s�Ȃ�A�ُ�I��
		return false;
	}

	// ���t���[���X�V��L����
	scheduleUpdate();

	// �^�b�`�C�x���g���X�i�[���쐬
	EventListenerTouchOneByOne* listener = EventListenerTouchOneByOne::create();
	listener->onTouchBegan = CC_CALLBACK_2(PlayScene::onTouchBegan, this);
	_director->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);

	// ������������I��
	return true;
}

// ���t���[���X�V
void PlayScene::update(float delta)
{
	// ���̃V�[�����쐬����
	Scene* nextScene = ResultScene::create();
	// ���̃V�[���Ɉڍs
	_director->replaceScene(nextScene);
}

// �^�b�`�J�n���R�[���o�b�N
bool PlayScene::onTouchBegan(Touch* touch, Event* pEvent)
{
	// ���̃V�[�����쐬����
	Scene* nextScene = ResultScene::create();

	// ���̃V�[���Ɉڍs
	_director->replaceScene(nextScene);

	return true;
}
