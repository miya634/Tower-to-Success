#include "DxLib.h"
#include "SceneMgr.h"
#include "Title.h"
#include "Stage.h"

void SceneMgr::InitSceneMgr() {
	nowScene_ptr.reset(new Title());
	nowScene_type = BaseScene::Title;
}

void SceneMgr::ChangeScene() {
	switch (nextScene_type)
	{
	case BaseScene::Title:
		nowScene_ptr.reset(new Title());
		break;
	case BaseScene::Stage:
		nowScene_ptr.reset(new Stage());
		break;
	case BaseScene::Pause:
		break;
	case BaseScene::Clear:
		break;
	case BaseScene::Falut:
		break;
	case BaseScene::End:
		break;
	default:
		break;
	}
}

void SceneMgr::Update() {
	nextScene_type = nowScene_ptr->Update();
	nowScene_ptr->Draw();

	if (nextScene_type == BaseScene::End) {
		game_end_flag = true;
		return;
	}

	if (nowScene_type != nextScene_type)
		ChangeScene();
}