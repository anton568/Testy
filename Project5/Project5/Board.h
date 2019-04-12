#ifndef BOARD_H
#define BOARD_H
#define x 50
#define y 70
#include <iostream>
class Board
{
public:
	int maxx = 50;
	int maxy = 70;
	char field[50][70];
	char checkfield[50][70];
	void createfield();
	void drawfield();
};
#endif