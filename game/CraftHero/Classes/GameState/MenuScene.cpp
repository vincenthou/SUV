#include "MenuScene.h"

using namespace cocos2d;

namespace NS_SUV{

	const int MMENULAYER_Z_ORDER = 10;

	/*Layer init*/
	CMenuLayer::CMenuLayer(){
		init();
	}
	CMenuLayer::~CMenuLayer(){

	}

	bool CMenuLayer::init(){

		CCLabelTTF* pLabel = CCLabelTTF::create("CraftHero", "Arial", 30);

		CCSize size = CCDirector::sharedDirector()->getWinSize();
		pLabel->setPosition(ccp(size.width / 2, size.height - 50));
		this->addChild(pLabel, 1);

		CCSprite* pSprite = CCSprite::create("background.png");

		pSprite->setPosition(ccp(size.width/2, size.height/2));

		this->addChild(pSprite, 0);

		CCMenuItemFont::setFontName("Arial");
		CCMenuItemFont::setFontSize(25);
		CCMenuItemFont *newGame = CCMenuItemFont::itemWithString("New Game", this,menu_selector(CMenuLayer::gameNew) );
		CCMenuItemFont *loading = CCMenuItemFont::itemWithString("Loading", this,menu_selector(CMenuLayer::gameLoad) );
		CCMenuItemFont *option = CCMenuItemFont::itemWithString("Option", this,menu_selector(CMenuLayer::gameSetting) );
		CCMenuItemFont *quit = CCMenuItemFont::itemWithString("Quit", this,menu_selector(CMenuLayer::gameQuit) );

		CCMenu *menu = CCMenu::menuWithItems(newGame,loading,option,quit,NULL);
		menu->alignItemsVertically();
		this->addChild(menu, 1, 2);

		return true;
	}

	void CMenuLayer::gameNew(CCObject* pSender)
	{

	}

	void CMenuLayer::gameSetting(CCObject* pSender)
	{

	}
	void CMenuLayer::gameLoad(CCObject* pSender)
	{

	}
	void CMenuLayer::gameQuit(CCObject* pSender)
	{
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