#pragma once
#include <iostream>
using namespace std;

class Point {
private:
		int m_x;
		int m_y;
public:
	void setX(int);
	void setY(int);
	int getX();
	int getY();
};