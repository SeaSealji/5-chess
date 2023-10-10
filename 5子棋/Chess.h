#pragma once
#include<graphics.h>
#include<vector>
using namespace std;
struct ChessPos {
    int row;
    int col;
    ChessPos(int row = 0, int col = 0) :row(row), col(col) {}
};
typedef enum {
    CHESS_WHITE = -1,//白棋
    CHESS_BLACK = 1
}chess_kind_t;
class Chess
{
public:
    Chess(int gradeSize, int marginX, int marginY, float chessSize);
    void init();
    bool clickBoard(int x, int y, ChessPos* pos);
    void chessDown(ChessPos *pos, chess_kind_t kind);
    int getGradeSize();
    bool checkOver();//检查棋局是否结束
    int getChessData(ChessPos* pos);
    int getChessData(int row, int col);
private:
    void updateGameMap(ChessPos* pos);
    IMAGE chessBlackImg;
    IMAGE chessWhiteImg;
    int gradeSize;
    int margin_x;//棋盘左侧边缘
    int margin_y;//棋盘上边界
    float chessSize;
    vector<vector<int>>chessMap;//0空白,1黑子,-1白子
    //现在谁下棋
    ChessPos lastPos;
    bool playerFlag;//true 黑子,flase白子
    bool checkWin();//如果胜负已分,返回true,不然false


};

