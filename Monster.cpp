#include "Monster.h"


Monster::Monster()
{
	this->m_Name = "��ҹħ��";
	this->m_Atk = 70;
	this->m_Def = 40;
	this->m_Hp = 300;
	this->isHold = false;

}

void Monster::attack(Hero* hero)
{
	if (this->isHold) {
		cout<< this->m_Name<<"�������ˣ�ֹͣ����һ�غ�"<<endl;
		return;
	}
	int realDamage = this->m_Atk - hero->m_Atk;
	hero->m_Hp -= realDamage;
	cout << "����" << this->m_Name << "������Ӣ��" << hero->m_Name << "��������˺�" << realDamage << endl;
}
