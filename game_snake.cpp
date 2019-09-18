#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "Wall.h"
#include"Snake.h"
#include"food.h"
#include<ctime>

void main() {
	srand((unsigned int)time(NULL));
	Wall wall;
	wall.initWall();
	Snake snake(wall);
	snake.initSnake();
	//wall.setWall(5, 4 ,'=');
	//wall.setWall(5, 5 ,'=');
	//wall.setWall(5, 6 ,'@');
	Food food(wall);
	food.setFood();
	wall.drawWall();
}