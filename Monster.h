#pragma once
#include <iostream>
#include <string>
using namespace std;
class Hero;
class Monster {
public:
	Monster();

	string m_Name;
	int m_Atk;
	int m_Def;
	int m_Hp;
	bool isHold;
	void attack(Hero* hero);
};