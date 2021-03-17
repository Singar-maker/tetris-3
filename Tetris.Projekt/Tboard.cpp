#include "Tboard.h"
#include <iostream>

/*
void Tboard::constuct_Board(int H, string B[])
{
	for (int i = 0; i < H; i++)
	{
		if (H != H - 1)
		{
			B[i] = { "X                     X" };
		}
		else B[i] = { "XXXXXXXXXXXXXXXXXXXX" };
	}
	
}
*/
void Tboard::draw_Board()
{
	cout << "\n\n\n\n\n";
	//Tboard::constuct_Board(height_Board, Board);
	for (int y = 0; y < height_Board; y++){
		cout << "\t\t\t\t\t";

		cout << Board[y] << endl;
	}
}

Tboard::Tboard()
{
	
	for (int i = 0; i < height_Board; i++)
	{
		
		if (i != height_Board - 1)
		{
			Board[i] = { "X                     X" };
		}
		else Board[i] = { "XXXXXXXXXXXXXXXXXXXXXXX" };
	}
}
