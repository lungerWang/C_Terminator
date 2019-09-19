#pragma once

#include<iostream>
#include"wall.h"
#include"food.h"
using namespace std;

class Snake {
	struct Point {
		//������
		int x;
		int y;

		//ָ����
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
	//��ӽڵ�
	void addPoint(int x, int y);
	//ɾ��β��
	void deletePoint();
	//�ߵ��ƶ�
	bool move(char key);
	Point* pHead;
	Wall& wall;
	Food& food;



};