#pragma once
#include <iostream>
#include "Weapon.h"
#include <string>

using namespace std;


class Knife :public Weapon {

public:
	Knife();
	
	virtual int getBaseDamage();

	virtual int getSuckBlood();

	virtual bool getHold();

	virtual bool getCrit();

};