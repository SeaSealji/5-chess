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
    CHESS_WHITE = -1,//����
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
    bool checkOver();//�������Ƿ����
    int getChessData(ChessPos* pos);
    int getChessData(int row, int col);
private:
    void updateGameMap(ChessPos* pos);
    IMAGE chessBlackImg;
    IMAGE chessWhiteImg;
    int gradeSize;
    int margin_x;//��������Ե
    int margin_y;//�����ϱ߽�
    float chessSize;
    vector<vector<int>>chessMap;//0�հ�,1����,-1����
    //����˭����
    ChessPos lastPos;
    bool playerFlag;//true ����,flase����
    bool checkWin();//���ʤ���ѷ�,����true,��Ȼfalse


};

