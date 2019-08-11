#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "game1.h"
#include "game2.h"


int atk = 200;
void main() {
	int atk = 100;
	cout << atk << endl;
	cout << ::atk << endl;

	LOL::goAtk();
	WZRY::goAtk();
}