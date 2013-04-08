#include "MapLayer.h"

namespace NS_SUV{

	CMapLayer::CMapLayer(){
		bSelected = false;
		init();
	}
	CMapLayer::~CMapLayer(){

	}

	bool CMapLayer::init(){

		mTileMap=CCTMXTiledMap::create("barr_1.tmx");
		addChild(mTileMap);
		
		mPlayerAnimate = new CUtilAnimate("141-1.png",1.5f);

		CCTMXObjectGroup *objects=mTileMap->objectGroupNamed("obj1");//获取对象层
		CCDictionary  *spawnPoint=objects->objectNamed("dianwei");//获取对象
		mPlayerPnt.x=spawnPoint->valueForKey("x")->floatValue();//获取对象的坐标
		mPlayerPnt.y=spawnPoint->valueForKey("y")->floatValue();
		//CCLog("x=%f,y=%f",mPlayerPnt.x,mPlayerPnt.y);
/*
		mPlayer=CCSprite::create("www.png");
		mPlayer->setAnchorPoint(CCPoint(0,0));
		mPlayer->setPosition(mPlayerPnt);
		*/
		mPlayer = mPlayerAnimate->GetHero();
		mPlayer->setPosition(mPlayerPnt);
		mPlayer->runAction(CCRepeatForever::actionWithAction(mPlayerAnimate->runUp()));//重复播放

		mTileMap->addChild(mPlayer,0);

		return true;
	}

	bool CMapLayer::ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *event)
	{
		CCPoint nPnt=pTouch->getLocation();//当前点击的地方
		if(CCPoint::CCPointEqualToPoint(nPnt,mPlayerPnt))
		{
			bSelected = true;

		}

		return true;
	}

	void CMapLayer::ccTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent)
	{

	}

	void CMapLayer::ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent)
	{


	}

}