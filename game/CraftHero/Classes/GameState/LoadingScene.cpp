#include "LoadingScene.h"
#include "../Manager/GameManager.h"
#include "../Event/Common.h"

namespace NS_SUV{
	const int MLOADLAYER_Z_ORDER = 10;

	/*layer */
	CLoadingLayer::CLoadingLayer(){
		init();
	}
	CLoadingLayer::~CLoadingLayer(){

	}

	bool CLoadingLayer::init(){

		pLogo = CCSprite::create("HelloWorld.png");

		CCSize size = CCDirector::sharedDirector()->getWinSize();

		pLogo->setPosition(ccp(size.width/2, size.height/2));

		this->addChild(pLogo, 0);

		return true;
	}

	CLoadingScene::CLoadingScene()
	{
		fTime = 0.0f;
		nOpacity = 0;

		//CLoadingLayer *mLoadingLayer = new CLoadingLayer();
		mLoadingLayer = new CLoadingLayer();
		mLoadingLayer->setPosition(ccp(0, 0));
		this->addChild(mLoadingLayer, MLOADLAYER_Z_ORDER);

		this->schedule( schedule_selector(CLoadingScene::updateGame) );
	}
	CLoadingScene::~CLoadingScene(){
		//delete myLoadingLayer;
	}

	bool CLoadingScene::init(){
		return true;
	}

	void CLoadingScene::updateGame(float dt){
		fTime+=dt;

		if(fTime>=1.0f)
			GameMgr->ChangeGameState(STATE_MENU);
	}



}