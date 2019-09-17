#include "Wall.h"

void Wall::initWall()
{
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			if (i == 0 || j == 0 || i == ROW - 1 || j == COLUMN - 1) {
				gameArray[i][j] = '*';
			}
			else {
				gameArray[i][j] = ' ';
			}
		}
	}
}

void Wall::drawWall()
{
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			cout << gameArray[i][j] << " ";
		}
		if (i == 6) {
			cout << " Create by Allen";
		}
		if (i == 7) {
			cout << " W : up";
		}
		if (i == 8) {
			cout << " A : left";
		}
		if (i == 9) {
			cout << " D : right";
		}
		if (i == 10) {
			cout << " S : down";
		}
		cout << endl;
	}
}

void Wall::setWall(int x, int y, char c)
{
	gameArray[x][y] = c;
}

char Wall::getWall(int x, int y)
{
	return gameArray[x][y];
}
