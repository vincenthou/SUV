#ifndef __MENU_SCENE_H__
#define __MENU_SCENE_H__

#include "cocos2d.h"

using namespace cocos2d;

namespace NS_SUV{

	class CMenuLayer : public CCLayer
	{
	public:
		CMenuLayer();
		~CMenuLayer();

		bool			init();
		void			menuCloseCallback(CCObject* pSender);

	};

	class CMenuScene : public CCScene
	{
	public:
		CMenuScene();
		~CMenuScene();

		bool			init();
		void			Initialize();
	};

}

#endif
