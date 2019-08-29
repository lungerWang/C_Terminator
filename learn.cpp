#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "game1.h"
#include "game2.h"
#include "circle.h"
#include "Point.h"
#include "hero.h"
#include "Monster.h"
#include "Weapon.h"
#include "Knife.h"
#include "DragonSward.h"


int atk = 200;

void printm(Point p) {
	cout << p.getX() << ",," << p.getY() << ",,"<< &p <<endl;
}

void printm2(Point & p) {
	cout << p.getX() << ",," << p.getY() << ",," << &p << endl;
}

void play() {
	//创建怪物
	Monster* monster = new Monster;
	//创建英雄
	Hero* hero = new Hero;
	//创建武器
	Knife* knife = new Knife;
	DragonSward* dragon = new DragonSward;

	cout << "请选择武器：" << endl;
	cout << "1.赤手空拳" << endl;
	cout << "2.小刀" << endl;
	cout << "3.灭世屠龙" << endl;
	int option;
	cin >> option;

	switch (option) {
	case  1:
		cout << "你还是太年轻了" << endl;
		break;
	case 2:
		hero->EquipWeapon(knife);
		break;
	case 3:
		hero->EquipWeapon(dragon);
		break;
	default:
		break;
	}
	getchar();

}

void main() {
	if (false) {
		int atk = 100;
		cout << atk << endl;
		cout << ::atk << endl;

		LOL::goAtk();
		WZRY::goAtk();

		Circle circle;
		circle.length = 50;
		cout << circle.getCircle() << endl;
		Point p;
		p.setX(10);
		p.setY(11);
		cout << p.getX() << ",," << p.getY() << ",," << &p << endl;
		//cout << p.getX() << ",," << p.getY() << endl;
		printm(p);
		printm2(p);
	}

	play();
}

