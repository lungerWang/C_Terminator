#pragma once
#include <iostream>
using namespace std;


class Wall {
public:
	enum {
		ROW = 26,
		COLUMN = 26
	};

	//��ʼ����Ϸ�߽�
	void initWall();

	//�����߽�
	void drawWall();
	//����ĳһ�����ʾ
	void setWall(int x, int y, char c);

	char getWall(int x, int  y);

private:
	char gameArray[ROW][COLUMN];
};
