#pragma once
#include"Chess.h"
class AI
{
public:
	void go();
	void init(Chess* chess );
private:  
	Chess* chess;
	vector<vector<int>>scoreMap;
	void calculateScore();
	ChessPos think();
};

