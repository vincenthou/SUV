#ifndef __GAME_MANAGER_H__
#define __GAME_MANAGER_H__

#include "cocos2d.h"
#include "GameState/LoadingScene.h"
#include "GameState/MenuScene.h"
#include "GameState/GameScene.h"

using namespace cocos2d;
namespace NS_SUV{

	#define GameMgr NS_SUV::CGameManager::Instance()

	class CGameManager{
	public:
		CGameManager();
		~CGameManager();

		bool				Initialize();
		void				ChangeGameState(int nState);

		static CGameManager*Instance();
	protected:
		static CGameManager* mGameManager;

	private:
		CLoadingScene*		mLoadingScene;
		CMenuScene*			mMenuScene;
		CGameScene*			mGameScene;

		int					mCurrentState;

	};
}


#endif  