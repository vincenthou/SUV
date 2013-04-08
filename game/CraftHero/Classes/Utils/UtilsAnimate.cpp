#include "UtilAnimate.h"

namespace NS_SUV{

	//将png转成一次性动画
	CUtilAnimate::CUtilAnimate(const char *pszFileName,float frameTime){
		//pngFileName = pszFileName;
		strcpy(pngFileName,pszFileName);
		fFrameTime = frameTime;

	}
	CUtilAnimate::~CUtilAnimate(){
		delete pngFileName;
	}

	CCAnimate*	CUtilAnimate::runUp(){
/*
		CCAnimation* animation = CCAnimation::create();  
		CCSprite *pPlayer1 = CCSprite::spriteWithFile( pngFileName,CCRectMake(0, 0, 48, 48));
		CCSprite *pPlayer1 = CCSprite::spriteWithFile( pngFileName,CCRectMake(0, 48, 48, 48));
		for( int i=1;i<3;i++)  
		{  
			char szName[20];
			sprintf(szName, "pPlayer%d", i);
			animation->addSpriteFrameWithFileName(szName);  
		}  

		animation->setDelayPerUnit(fFrameTime);  
		animation->setRestoreOriginalFrame(true);    
		return animation; 
		*/
		CCTexture2D *texture=CCTextureCache::sharedTextureCache()->addImage(pngFileName); 
		CCSpriteFrame *frame0=CCSpriteFrame::frameWithTexture(texture,CCRectMake(48*0, 48*0, 48, 48)); 
		CCSpriteFrame *frame1=CCSpriteFrame::frameWithTexture(texture,CCRectMake(48*0, 48*1, 48, 48)); 
		//CCArray<CCSpriteFrame*> *animFrames = new CCArray<CCSpriteFrame*>(2);
		CCArray *animFrames = CCArray::arrayWithCapacity(2); 
		animFrames->addObject(frame0); 
		animFrames->addObject(frame1); 

		CCAnimation *animation = CCAnimation::animationWithSpriteFrames(animFrames, fFrameTime); 
		animFrames->release();  
		mHero = CCSprite::spriteWithSpriteFrame(frame0);
		//sprite->setPosition( ccp( s.width/2, s.height/2) ); 

		CCAnimate *animate = CCAnimate::actionWithAnimation(animation); 
		//sprite->runAction(CCRepeatForever::actionWithAction(animate));//重复播放
		
		return animate;

	}

	CCSprite*	CUtilAnimate::GetHero()
	{
		return mHero;
	}

	CCAnimation*	CUtilAnimate::runDown(){return NULL;}
	CCAnimation*	CUtilAnimate::runRight(){return NULL;}
	CCAnimation*	CUtilAnimate::runLeft(){return NULL;}


	CCSprite*	CUtilAnimate::idleDown(){
		CCSprite *idleDown = CCSprite::spriteWithFile(pngFileName,CCRectMake(48*0, 48*5, 48, 48));
		return idleDown;
	}
	CCSprite*	CUtilAnimate::idleup(){return NULL;}
	CCSprite*	CUtilAnimate::idleRight(){return NULL;}
	CCSprite*	CUtilAnimate::idleLeft(){return NULL;}
	CCSprite*	CUtilAnimate::idleHert(){return NULL;}
}