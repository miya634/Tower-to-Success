#pragma once

class BaseScene {
public:
	enum eScene {Title,Stage,Pause,Clear,Falut,End};

	virtual ~BaseScene(){}

	//シーンの更新。戻り値で次のシーンを返す
	virtual eScene Update();
	virtual void Draw();

protected:

};