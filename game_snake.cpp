#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "Wall.h"
#include"Snake.h"
#include"food.h"
#include<ctime>
#include<conio.h>
#include<Windows.h>

void main() {
	srand((unsigned int)time(NULL));
	bool isDead = false;
	char preKey = NULL;
	Wall wall;
	wall.initWall();
	Food food(wall);
	food.setFood();
	Snake snake(wall, food);
	snake.initSnake();
    //wall.setWall(5, 4 ,'=');
	//wall.setWall(5, 5 ,'=');
	//wall.setWall(5, 6 ,'@');
	//snake.move('w');
	//snake.move('w');
	//snake.move('a');
	//snake.deletePoint();
	wall.drawWall();
	while (!false) {
		char key = _getch();
		if (preKey == NULL && key == snake.LEFT) {
			continue;
		}
	
		do {
			if (key == snake.UP || key == snake.LEFT || key == snake.RIGHT || key == snake.DOWN) {	
				if ((preKey == snake.RIGHT && key == snake.LEFT)
					|| (preKey == snake.LEFT && key == snake.RIGHT)
					|| (preKey == snake.UP && key == snake.DOWN)
					|| (preKey == snake.DOWN && key == snake.UP)) {
					key = preKey;
					continue;
				}
				preKey = key;
				if (snake.move(key)) {
					system("cls");
					wall.drawWall();
					Sleep(snake.getSleepTime());
				}
				else {
					isDead = true;
					break;
				}
			}
			else {
				key = preKey;
			}
		} while (!_kbhit());
	}
}