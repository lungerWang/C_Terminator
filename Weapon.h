#pragma once
#include<iostream>
#include<string>
using namespace std;

class Weapon {
public :
	int m_BaseDamage;
	string m_WeaponName;

	virtual int getBaseDamage() = 0;

	virtual int getSuckBlood() = 0;

	virtual bool getHold() = 0;

	virtual bool getCrit() = 0;

};
