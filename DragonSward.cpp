#include "DragonSward.h"

DragonSward::DragonSward()
{
	this->m_BaseDamage = 20;
	this->m_WeaponName = "ÃðÊÀÍÀÁúµ¶";
	this->suckRate = 20;
	this->holdRate = 30;
	this->critRate = 35;
}

int DragonSward::getBaseDamage()
{
	return this->m_BaseDamage;
}

int DragonSward::getSuckBlood()
{
	if (isTrigger(this->suckRate)) {
		return this->m_BaseDamage * 0.5;
	}
	return 0;
}

bool DragonSward::getHold()
{
	return isTrigger(this->holdRate);
}

bool DragonSward::getCrit()
{
	return isTrigger(this->critRate);
}

bool DragonSward::isTrigger(int rate)
{
	int random = rand() % 100 + 1;
	if (random < rate) {
		return true;
	}
	return false;
}
