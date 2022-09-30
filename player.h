#pragma once

#include "Vec2.h"

class Player
{
public:

	static constexpr int kGraphicDivX = 3;
	static constexpr int kGraphicDivY = 4;
	static constexpr int kGraphicNum = kGraphicDivX * kGraphicDivY;

	static constexpr int kGraphicSizeX = 32;
	static constexpr int kGraphicSizeY = 32;

	Player();
	virtual ~Player();

	// �O���t�B�b�N�f�[�^�ݒ�
	void setHandle(int index,int handle) { m_handle[index] = handle; }

	// �v���C���[�̏�����
	void init();

	// ����
	void update();
	// �`��
	void draw();

private:
	int m_handle[12];

	// �\���ʒu
	Vec2 m_pos;
	// �ړ�
	Vec2 m_vec;

	int m_animeNo;

	int m_animeFrame;

	int motion;
};