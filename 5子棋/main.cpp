#include<graphics.h>
#include<Windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
#include"Chess.h"
#include"AI.h"
#include"Man.h"
#include"ChessGame.h"
int main() {
	Man man;
	Chess chess(13,44,43,67.3);
	AI ai;
	ChessGame game(&man, &ai, &chess);
	game.play();
	system("pause");
	return 0;
}