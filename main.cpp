#include "DxLib.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

// �t�B�[���h�y�уu���b�N�̐ݒ�
#define F_WIDTH  12               // �t�B�[���h�̕�
#define F_HEIGHT 21               // �t�B�[���h�̍���
#define F_NUM  F_WIDTH * F_HEIGHT // �t�B�[���h�̃}�X�̐�
#define NO_WALL_NUM  (F_WIDTH - 2) * (F_HEIGHT - 1) //���E���̕ǂ����������̃t�B�[���h�̃}�X�̐�
#define B_WIDTH  4                // �u���b�N�̕�
#define B_HEIGHT 4                // �u���b�N�̍���
#define B_NUM  B_WIDTH * B_HEIGHT // �u���b�N�̃}�X�̐�