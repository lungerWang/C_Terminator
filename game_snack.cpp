#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "Wall.h"
#include"Snake.h"

void main() {
	Wall wall;
	wall.initWall();
	Snake snake(wall);
	snake.initSnake();
	//wall.setWall(5, 4 ,'=');
	//wall.setWall(5, 5 ,'=');
	//wall.setWall(5, 6 ,'@');
	wall.drawWall();
}