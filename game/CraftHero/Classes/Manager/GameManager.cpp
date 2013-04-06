#include "GameManager.h"
#include "GameState/LoadingScene.h"
#include "Event/Common.h"

namespace NS_SUV{

	CGameManager* CGameManager::mGameManager=NULL;

	CGameManager::CGameManager(){

		mCurrentState = 0;

	}
	CGameManager::~CGameManager(){
		if (mLoadingScene)
			delete mLoadingScene;
		if(mMenuScene)
			delete mMenuScene;
	}

	CGameManager* CGameManager::Instance(){
		if (mGameManager==NULL)
			mGameManager = new CGameManager();
		return mGameManager;
	}

	bool CGameManager::Initialize()//初始化资源
	{
		mLoadingScene = new CLoadingScene(); 
		mMenuScene = new CMenuScene();
		return true;
	}

	void CGameManager::ChangeGameState(int nState){
			
		if (mCurrentState == nState)
			return;
		switch(nState)
		{
			case STATE_LOADING:
				CCDirector::sharedDirector()->runWithScene(mLoadingScene);
				mCurrentState = STATE_LOADING;
				break;
			case STATE_MENU:
				mLoadingScene->release();
				CCDirector::sharedDirector()->replaceScene(mMenuScene);
				mCurrentState = STATE_MENU;
				break;
			case STATE_MAIN:
				mCurrentState = STATE_MAIN;
				break;
			case STATE_GAME:
				mCurrentState = STATE_GAME;
				break;
			case STATE_OVER:
				mCurrentState = STATE_OVER;
				break;

		}

	}


}