#include "MenuScene.h"

namespace NS_SUV{

	const int MMENULAYER_Z_ORDER = 10;

	/*Layer init*/
	CMenuLayer::CMenuLayer(){
		init();
	}
	CMenuLayer::~CMenuLayer(){

	}

	bool CMenuLayer::init(){

		CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
			"CloseNormal.png",
			"CloseSelected.png",
			this,
			menu_selector(CMenuLayer::menuCloseCallback));

		pCloseItem->setPosition(ccp(CCDirector::sharedDirector()->getWinSize().width - 20, 20));

		CCMenu* pMenu = CCMenu::create(pCloseItem, NULL);
		pMenu->setPosition(CCPointZero);

		this->addChild(pMenu, 1);

		CCLabelTTF* pLabel = CCLabelTTF::create("SUV", "Arial", 24);

		CCSize size = CCDirector::sharedDirector()->getWinSize();
		pLabel->setPosition(ccp(size.width / 2, size.height - 50));
		this->addChild(pLabel, 1);

		CCSprite* pSprite = CCSprite::create("background.png");

		pSprite->setPosition(ccp(size.width/2, size.height/2));

		this->addChild(pSprite, 0);

		return true;
	}

	void CMenuLayer::menuCloseCallback(CCObject* pSender){
		CCDirector::sharedDirector()->end();
	}

	/*Layer end*/

	CMenuScene::CMenuScene(){
		CMenuLayer *mMenuLayer = new CMenuLayer();
		mMenuLayer->setPosition(ccp(0, 0));
		this->addChild(mMenuLayer, MMENULAYER_Z_ORDER);
	}
	CMenuScene::~CMenuScene(){

	}

	bool CMenuScene::init(){
		return true;
	}

}