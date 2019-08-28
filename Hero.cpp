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
	cout << "Ӣ������" << this->m_Name << "������" << this->weapon->m_WeaponName << endl;
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
		//�����˺�
		damage = this->m_Atk + this->weapon->getBaseDamage();
		//������Ѫ
		addHp = this->weapon->getSuckBlood();
		//�Ƿ����
		isHold = this->weapon->getHold();
		//�Ƿ񱩻�
		isCrit = this->weapon->getCrit();
		
		if (isCrit) {
			damage = damage * 2;
			cout << "�����ٷ�����Ч�������˫���˺����˺�ֵ��" << damage << endl;
		}

		if (isHold) {
			cout << "�����ٷ����Ч��������ֹͣ����һ�غ�" << endl;
		}

		if (addHp > 0) {
			cout << "�����ٷ���ѪЧ��������Ѫ��Ϊ��" <<addHp<< endl;
		}
		//�������Ѫ��
		monster->isHold = isHold;
		int realDamage = damage - monster->m_Def;
		monster->m_Hp -= realDamage;

	}
}
