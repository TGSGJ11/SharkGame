#include "TitleScene.h"
#include "ResultScene.h"
#include "AudioEngine.h"

USING_NS_CC;

using namespace experimental;

ResultScene* ResultScene::create()
{
	ResultScene *pRet = new(std::nothrow) ResultScene();
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
bool ResultScene::init()
{
	// ���N���X�̏�����
	if (!Scene::init())
	{
		// ���N���X�̏����������s�Ȃ�A�ُ�I��
		return false;
	}

	// ���t���[���X�V��L����
	scheduleUpdate();

	// ������������I��
	return true;
}

// ���t���[���X�V
void ResultScene::update(float delta)
{

}