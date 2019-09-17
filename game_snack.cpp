#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "Wall.h"

void main() {
	Wall wall;
	wall.initWall();
	wall.setWall(5, 4 ,'=');
	wall.setWall(5, 5 ,'=');
	wall.setWall(5, 6 ,'@');
	wall.drawWall();
}