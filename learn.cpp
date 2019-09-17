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
	//��������
	Monster* monster = new Monster;
	//����Ӣ��
	Hero* hero = new Hero;
	//��������
	Knife* knife = new Knife;
	DragonSward* dragon = new DragonSward;

	cout << "��ѡ��������" << endl;
	cout << "1.���ֿ�ȭ" << endl;
	cout << "2.С��" << endl;
	cout << "3.��������" << endl;
	int option;
	cin >> option;

	switch (option) {
	case  1:
		cout << "�㻹��̫������" << endl;
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

	int round = 1;
	while (true) {
		getchar();
		system("cls");
		cout << "---- ��ǰ��" <<round<<"�غϿ�ʼ ----"<<endl;
		if (hero->m_Hp <= 0) {
			cout<<"����������game over"<<endl;
			break;
		}
		hero->attack(monster);
		if (monster->m_Hp <= 0) {
			cout << "������������ϲ����Ϸͨ��" << endl;
			break;
		}
		monster->attack(hero);
		if (hero->m_Hp <= 0) {
			cout << "����������game over" << endl;
			break;
		}
		cout << "Ӣ��"<<hero->m_Name<<"ʣ��Ѫ����" <<hero->m_Hp<< endl;
		cout << "����" << monster->m_Name << "ʣ��Ѫ����" << monster->m_Hp << endl;
		round++;

	}
	delete hero;
	delete monster;
	delete knife;
	delete dragon;

}

void test2() {
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

