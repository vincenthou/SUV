#ifndef __MAP_LAYER_H__
#define __MAP_LAYER_H__

#include "cocos2d.h"
#include "Utils/UtilAnimate.h"

using namespace cocos2d;

namespace NS_SUV{

	class CMapLayer : public CCLayer
	{
	public:
		CMapLayer();
		~CMapLayer();

		bool					init();
		virtual bool			ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent); 
		virtual void			ccTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent); 
		virtual void			ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);  
	protected:
		CCTMXTiledMap*			mTileMap;
		CCSprite*				mPlayer;
		CUtilAnimate*			mPlayerAnimate;
		CCPoint					mPlayerPnt;
		CCPoint					mBeginPnt;
	private:
		bool					bSelected;

	};
}
#endif