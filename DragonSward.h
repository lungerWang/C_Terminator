#pragma once
#include <iostream>
#include <string>
#include "Weapon.h"

using namespace std;

class DragonSward : public Weapon {
public:

	DragonSward();

	virtual int getBaseDamage();

	virtual int getSuckBlood();

	virtual bool getHold();

	virtual bool getCrit();

	//±©»÷ÂÊ ÎüÑªÂÊ Âé±ÔÂÊ
	int critRate;
	int suckRate;
	int holdRate;

	bool isTrigger(int rate);

};