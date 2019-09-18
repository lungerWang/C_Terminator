#pragma once
#include<iostream>
using namespace std;
#include"Wall.h"

class Food {
public:
	Food(Wall& tmpWall);

	int foodX;
	int foodY;

	void setFood();

	Wall& wall;
};