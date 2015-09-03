#pragma once

#include "SceneMgr.h"

class GameFrame {
public:
	int MainLoop();

protected:
	SceneMgr scemgr;
};