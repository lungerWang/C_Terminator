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
	Food food(wall);
	food.setFood();
	Snake snake(wall, food);
	snake.initSnake();
    //wall.setWall(5, 4 ,'=');
	//wall.setWall(5, 5 ,'=');
	//wall.setWall(5, 6 ,'@');
	snake.move('w');
	snake.move('w');
	snake.move('a');
	//snake.deletePoint();
	wall.drawWall();
}