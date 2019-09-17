#ifndef _WALL_HEAD
#define _WALL_HEAD
#endif
#include <iostream>
using namespace std;


class Wall {
public:
	enum {
		ROW = 26,
		COLUMN = 26
	};

	//初始化游戏边界
	void initWall();

	//画出边界
	void drawWall();
	//设置某一点的显示
	void setWall(int x, int y, char c);

	char getWall(int x, int  y);

private:
	char gameArray[ROW][COLUMN];
};
