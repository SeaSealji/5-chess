#pragma once
#include"Chess.h"
class Man
{
public:
	void go();
	void init(Chess* chess);
private:
	Chess* chess;
};

