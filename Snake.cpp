#include "Snake.h"

Snake::Snake(Wall &tmpWall, Food &tmpFood):wall(tmpWall), food(tmpFood)
{
	pHead = NULL;
	isLoop = false;
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

	//判断是不是碰到尾巴，碰到尾巴不应该死亡
	Point* pCur = pHead->next;
	Point* pPre = pHead;
	while (pCur->next != NULL) {
		pCur = pCur->next;
		pPre = pPre->next;
	}
	if (pCur->x == x && pCur->y == y) {
		isLoop = true;
	}else {
		if (wall.getWall(x, y) == '*' || wall.getWall(x, y) == '=') {
			addPoint(x, y);
			system("cls");
			wall.drawWall();
			cout << "游戏结束" << endl;
			return false;
		}
	}

	
	//吃到食物
	if (wall.getWall(x, y) == '#') {
		addPoint(x, y);
		food.setFood();
	}
	else {
		addPoint(x, y);
		deletePoint();
		if (isLoop) {
			wall.setWall(x, y, '@');
		}
	}
	return true;
}

int Snake::getSleepTime()
{
	int sleepTime = 0;
	int size = countList();
	if (size < 5) {
		sleepTime = 200;
	}else if (size >= 5 && size <= 8) {
		sleepTime = 150;
	}
	else {
		sleepTime = 100;
	}
	return sleepTime;
}

int Snake::countList()
{
	int size = 0;
	Point* curPoint = pHead;
	while (curPoint != NULL) {
		size++;
		curPoint = curPoint->next;
	}
	
	return size;
}
