#include "Tboard.h"
#include <string>
#include <iostream>
using namespace std;

Tboard::Tboard(){ 
	Board[Height] = { "ALA MA KOTA" };

	}
void Tboard::draw_Board(short h, string Board[])
{
	Tboard::create_Board(20,&Board[]);
	for (int y = 0; y < h ; y++)
	{
		cout << "\t\t\t\t\t\t";
		cout << Board[y] << endl;
	}
}
void Tboard::create_Board(short h, string Board[])
{
	for (int y = 0; y < h; y++)
	{
		if (y < h - 1)
			Board[y] = { "X                          X" };
		else Board[y] = { "XXXXXXXXXXXXXXXXXXXXXXXXXXXX" };

	}
}

