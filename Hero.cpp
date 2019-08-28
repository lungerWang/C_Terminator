#include "hero.h"

Hero::Hero()
{
	this->m_Name = "Jary";
	this->m_Atk = 50;
	this->m_Def = 50;
	this->m_Hp = 500;
	this->weapon = NULL;
}

void Hero::EquipWeapon(Weapon* weapon)
{
	this->weapon = weapon;
	cout << "英雄名：" << this->m_Name << "带上了" << this->weapon->m_WeaponName << endl;
}

void Hero::Attack(Monster* monster)
{
	int damage = 0;
	int addHp = 0;
	bool isCrit = false;
	bool isHold = false;

	if (this->weapon == NULL) {
		damage = this->m_Atk;
	}
	else {
		//基础伤害
		damage = this->m_Atk + this->weapon->getBaseDamage();
		//计算吸血
		addHp = this->weapon->getSuckBlood();
		//是否麻痹
		isHold = this->weapon->getHold();
		//是否暴击
		isCrit = this->weapon->getCrit();
		
		if (isCrit) {
			damage = damage * 2;
			cout << "武器促发暴击效果，造成双倍伤害，伤害值：" << damage << endl;
		}

		if (isHold) {
			cout << "武器促发麻痹效果，怪物停止攻击一回合" << endl;
		}

		if (addHp > 0) {
			cout << "武器促发吸血效果，增加血量为：" <<addHp<< endl;
		}
		//掉怪物的血量
		monster->isHold = isHold;
		int realDamage = damage - monster->m_Def;
		monster->m_Hp -= realDamage;

	}
}
