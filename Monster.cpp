#include "Monster.h"


Monster::Monster()
{
	this->m_Name = "暗夜魔王";
	this->m_Atk = 70;
	this->m_Def = 40;
	this->m_Hp = 300;
	this->isHold = false;

}

void Monster::attack(Hero* hero)
{
	if (this->isHold) {
		cout<< this->m_Name<<"被定身了，停止攻击一回合"<<endl;
		return;
	}
	int realDamage = this->m_Atk - hero->m_Atk;
	hero->m_Hp -= realDamage;
	cout << "怪物" << this->m_Name << "攻击了英雄" << hero->m_Name << "，造成了伤害" << realDamage << endl;
}
