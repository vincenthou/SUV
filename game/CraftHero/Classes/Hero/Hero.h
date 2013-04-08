#ifndef __HERO_H__
#define __HERO_H__

#include "cocos2d.h"

using namespace cocos2d;

namespace NS_SUV{
	class CHero
	{
	public:
		CHero();
		~CHero();
		virtual bool Initialize();
		virtual bool Update(float dt);
		
		/*player fresh*/
		virtual void ReLoad();
		virtual void OnEvent();

		/* player Status*/
		virtual void setPosition(const CCPoint& pos);
		virtual CCPoint getPosition();

		virtual void idle();
		virtual void hert();
		virtual void die();

		virtual int getHP();
		virtual int getMP();

		virtual int mBuffState();


	private:
		CCPoint mPos;
		int mHp;
		int mMp;

	};

}

#endif