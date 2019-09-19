#pragma once

#include<iostream>
#include"wall.h"
#include"food.h"
using namespace std;

class Snake {
	struct Point {
		//数据域
		int x;
		int y;

		//指针域
		Point* next;
	};
public:
	Snake(Wall& wall, Food& food);

	enum {
		UP = 'w',
		DOWN = 's',
		LEFT = 'a',
		RIGHT = 'd'
	};

	void initSnake();
	void destroyPoint();
	//添加节点
	void addPoint(int x, int y);
	//删除尾巴
	void deletePoint();
	//蛇的移动
	bool move(char key);
	Point* pHead;
	Wall& wall;
	Food& food;



};