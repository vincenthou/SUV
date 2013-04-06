#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__

#include "cocos2d.h"
#include "Layer/MapLayer.h"

using namespace cocos2d;

namespace NS_SUV{

	class CGameScene : public CCScene
	{
	public:
		CGameScene();
		~CGameScene();

		bool		   init();
		CMapLayer*	   mMapLayer;

	};
}
#endif