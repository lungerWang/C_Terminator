#pragma once

#include<iostream>
#include"wall.h"

using namespace std;

class Snake {
	struct Point {
		// ˝æ›”Ú
		int x;
		int y;

		//÷∏’Î”Ú
		Point* next;
	};
public:
	Snake(Wall& wall);
	void initSnake();
	void destroyPoint();
	void addPoint(int x, int y);

	Point* pHead;
	Wall& wall;



};