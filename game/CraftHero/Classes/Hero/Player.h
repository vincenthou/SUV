#ifndef __PLAYER_H_
#define __PLAYER_H_

#include "cocos2d.h"
#include "Hero.h"
using namespace cocos2d;

namespace NS_SUV{
	
	class CPlayer : public CHero{

	public:
		CPlayer();
		~CPlayer();

		virtual bool	Initialize();
		virtual bool	Update(float dt);

	protected:
		CCAnimate*		mRunAnimate;
		CCAnimate*		mStandAnimate;

	};


}

#endif