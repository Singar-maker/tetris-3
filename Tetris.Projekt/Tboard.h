#pragma once
#define height_Board 20
#include <iostream>
#include "Tvariable.h"
using namespace std;
class Tboard
{
private:
	string Board[height_Board];
	//void constuct_Board(int H, string B[]);
public:
	void draw_Board();
	Tboard();
};

