#ifndef __MAP_LAYER_H__
#define __MAP_LAYER_H__

#include "cocos2d.h"

using namespace cocos2d;

namespace NS_SUV{

	class CMapLayer : public CCLayer
	{
	public:
		CMapLayer();
		~CMapLayer();

		bool		  init();

	};
}
#endif