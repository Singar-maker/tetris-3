#pragma once
#include <iostream>
#include <string>
#include "Tboard.cpp"
using namespace std;
class Tboard
{
public:
	Tboard();
	void draw_Board(short h, string Board[]);
	
	

private:
	const short Height = { 20 };
	string Board[20];
	void create_Board(short h, string Board[]);



};


	
	

	