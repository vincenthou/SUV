#ifndef __UTIL_ANIMATE_H__
#define __UTIL_ANIMATE_H__
#include "cocos2d.h"
using namespace cocos2d;

namespace NS_SUV{

	/**功能：1、读取的资源图片，自动分离每个动作块图；
			 2、合成每个块图为一个连续的动作。
			**/
	class CUtilAnimate
	{
	public:
		CUtilAnimate(const char *pszFileName,float frameTime);
		~CUtilAnimate();

		CCAnimate*			runUp();
		CCAnimation*		runDown();
		CCAnimation*		runRight();
		CCAnimation*		runLeft();

		CCSprite*			idleDown();
		CCSprite*			idleup();
		CCSprite*			idleRight();
		CCSprite*			idleLeft();
		CCSprite*			idleHert();


		CCSprite*			GetHero();
		CCSprite*			mHero;
	private:
		char*				pngFileName;
		float				fFrameTime;
	

	};
}
#endif