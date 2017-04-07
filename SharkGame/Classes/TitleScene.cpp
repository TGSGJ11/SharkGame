#include "TitleScene.h"
#include "PlayScene.h"

#include "ui/CocosGUI.h"

USING_NS_CC;

TitleScene* TitleScene::create()
{
	TitleScene *pRet = new(std::nothrow) TitleScene();
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
bool TitleScene::init()
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
	listener->onTouchBegan = CC_CALLBACK_2(TitleScene::onTouchBegan, this);
	_director->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);

	// ������������I��
	return true;
}

// ���t���[���X�V
void TitleScene::update(float delta)
{

}

// �^�b�`�J�n���R�[���o�b�N
bool TitleScene::onTouchBegan(Touch* touch, Event* pEvent)
{
	return false;
}

void TitleScene::onButtonClick(Ref* ref)
{
	// ���̃V�[�����쐬����
	Scene* nextScene = PlayScene::create();
	// �t�F�[�h�A�E�g�g�����W�V����
	//nextScene = TransitionFade::create(1.0f, nextScene, Color3B(255, 255, 0));
	//nextScene = TransitionOriginal::create(1.0f, nextScene);
	// ���̃V�[���Ɉڍs
	_director->replaceScene(nextScene);
}
