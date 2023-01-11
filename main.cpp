#include "DxLib.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

// フィールド及びブロックの設定
#define F_WIDTH  12               // フィールドの幅
#define F_HEIGHT 21               // フィールドの高さ
#define F_NUM  F_WIDTH * F_HEIGHT // フィールドのマスの数
#define NO_WALL_NUM  (F_WIDTH - 2) * (F_HEIGHT - 1) //左右下の壁を除いた時のフィールドのマスの数
#define B_WIDTH  4                // ブロックの幅
#define B_HEIGHT 4                // ブロックの高さ
#define B_NUM  B_WIDTH * B_HEIGHT // ブロックのマスの数