#pragma once

class BaseScene {
public:
	enum eScene {Title,Stage,Pause,Clear,Falut,End};

	virtual ~BaseScene(){}

	//�V�[���̍X�V�B�߂�l�Ŏ��̃V�[����Ԃ�
	virtual eScene Update();
	virtual void Draw();

protected:

};