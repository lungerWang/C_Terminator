#include "Snake.h"

Snake::Snake(Wall &tmpWall):wall(tmpWall)
{
	pHead = NULL;
}

void Snake::initSnake()
{
	destroyPoint();
	addPoint(5, 3);
	addPoint(5, 4);
	addPoint(5, 5);
}

void Snake::destroyPoint()
{
	Point * pCur = pHead;
	while (pHead != NULL) {
		pCur = pHead->next;
		delete pHead;
		pHead = pCur;
	}
}


void Snake::addPoint(int x, int y)
{
	Point* newPoint = new Point;
	newPoint->x = x;
	newPoint->y = y;
	newPoint->next = NULL;
	if (pHead != NULL) {
		wall.setWall(pHead->x, pHead->y, '=');
	}
	newPoint->next = pHead;
	pHead = newPoint;
	wall.setWall(pHead->x, pHead->y, '@');
}
