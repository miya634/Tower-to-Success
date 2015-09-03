#include "DxLib.h"
#include "GameFrame.h"

int GameFrame::MainLoop() {

	while (ProcessMessage() == 0) {
		
		#if _DEBUG
		//強制終了コマンド。リリース版では排除
		if (CheckHitKey(KEY_INPUT_ESCAPE) > 0)
			break;
		#endif

		scemgr.Update();
		if (scemgr.Get_game_end_flag() == true)
			break;
	}

	return 0;
}