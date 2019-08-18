#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "game1.h"
#include "game2.h"
#include "circle.h"
#include "Point.h"


int atk = 200;

void printm(Point p) {
	cout << p.getX() << ",," << p.getY() << ",,"<< &p <<endl;
}

void printm2(Point & p) {
	cout << p.getX() << ",," << p.getY() << ",," << &p << endl;
}

void main() {
	int atk = 100;
	cout << atk << endl;
	cout << ::atk << endl;

	LOL::goAtk();
	WZRY::goAtk();

	Circle circle;
	circle.length = 50;
	cout<<circle.getCircle() << endl;
	Point p;
	p.setX(10);
	p.setY(11);
	cout << p.getX() << ",," << p.getY() << ",," << &p << endl;
	//cout << p.getX() << ",," << p.getY() << endl;
	printm(p);
	printm2(p);
}

