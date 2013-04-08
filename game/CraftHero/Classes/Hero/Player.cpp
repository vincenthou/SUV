#include "Player.h"

namespace NS_SUV{

	CPlayer::CPlayer(){


	}
	CPlayer::~CPlayer(){

	}
	bool CPlayer::Initialize(){

		mRunAnimate = NULL;
		mStandAnimate = NULL;
/*
		mRunAnimate = CCAnimation::create(); 
		mStandAnimate = CCAnimation::create(); 


		CCSprite *pPlayer = CCSprite::spriteWithFile("141-1.png",CCRectMake(0, 0, 48, 48));

		CCSpriteFrameCache* cache = 
			CCSpriteFrameCache::sharedSpriteFrameCache();
*/
		return true;
	}
	bool CPlayer::Update(float dt)
	{
		return true;
	}
}

