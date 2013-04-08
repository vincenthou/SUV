#ifndef __UTIL_ANIMATE_H__
#define __UTIL_ANIMATE_H__
#include "cocos2d.h"
using namespace cocos2d;

namespace NS_SUV{

	/**���ܣ�1����ȡ����ԴͼƬ���Զ�����ÿ��������ͼ��
			 2���ϳ�ÿ����ͼΪһ�������Ķ�����
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