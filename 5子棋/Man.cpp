#include "Man.h"
#include"Chess.h"
void Man::go()
{
	MOUSEMSG msg;
	ChessPos pos;
	while (1) {
		msg = GetMouseMsg();
		if (msg.uMsg == WM_LBUTTONDOWN && chess->clickBoard(msg.x, msg.y, &pos)) {
			break;
		}
	}
	chess->chessDown(&pos, CHESS_BLACK);

}

void Man::init(Chess* chess)
{
	this->chess = chess;
}
