#pragma once

#include <memory>
#include "BaseScene.h"
using namespace std;

class SceneMgr {
public:
	void Update();
	void ChangeScene();
	void InitSceneMgr();

	bool Get_game_end_flag() { return game_end_flag; }
private:
	shared_ptr<BaseScene> nowScene_ptr;
	BaseScene::eScene nowScene_type;
	BaseScene::eScene nextScene_type;

	//ゲーム終了フラグ
	bool game_end_flag;
};