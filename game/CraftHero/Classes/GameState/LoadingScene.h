#ifndef __LOADING_SCENE_H__
#define __LOADING_SCENE_H__

#include "cocos2d.h"

using namespace cocos2d;

namespace NS_SUV{

	class CLoadingLayer : public CCLayer
	{
	public:
		CLoadingLayer();
		~CLoadingLayer();
		bool			 init();
		CCSprite*		 pLogo;

	};

	class CLoadingScene : public CCScene
	{
	public:
		CLoadingScene();
		~CLoadingScene();

		bool			init();
		void			updateGame(float dt);

	private:
		CLoadingLayer*	mLoadingLayer;
		float			fTime;
		int				nOpacity;
	};
	
}

#endif
