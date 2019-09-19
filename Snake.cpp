#include "Snake.h"

Snake::Snake(Wall &tmpWall, Food &tmpFood):wall(tmpWall), food(tmpFood)
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

void Snake::deletePoint()
{
	//至少2个节点才能删除尾结点
	if (pHead == NULL || pHead->next == NULL) {
		return;
	}
	Point* pCur = pHead->next;
	Point* pPre = pHead;
	while (pCur->next != NULL) {
		pCur = pCur->next;
		pPre = pPre->next;
	}
	wall.setWall(pCur->x, pCur->y, ' ');
	delete pCur;
	pCur = NULL;
	pPre->next = NULL;

}

bool Snake::move(char key)
{
	int x = pHead->x;
	int y = pHead->y;
	switch (key)
	{

	case UP:
		x--;
		break;
	case DOWN:
		x++;
		break;
	case LEFT:
		y--;
		break;
	case RIGHT:
		y++;
		break;

	default:
		break;

	}
	if (wall.getWall(x, y) == '*' || wall.getWall(x, y) == '=') {
		cout << "游戏结束"<<endl;
		return false;
	}
	//吃到食物
	if (wall.getWall(x, y) == '#') {
		addPoint(x, y);
		food.setFood();
	}
	else {
		addPoint(x, y);
		deletePoint();
	}
	return true;
}
