#include "Board.h"
#include <stdlib.h>
#include <iostream>
using namespace  std;


void Board::createfield()
{
	for (int i = 0; i < maxx; i++)
	{
		for (int m = 0; m < maxy; m++)
		{
			field[i][m] = '1';
		}
	}
	for (int i = 0; i < maxx; i++)
	{
		for (int m = 0; m < maxy; m++)
		{
			checkfield[i][m] = '0';
		}
	}
}

void Board::drawfield()
{
	for (int i = 0; i < maxx; i++)
	{
		for (int m = 0; m < maxy; m++)
		{
			cout << field[i][m];
		}
		cout << "\n";
	}
}