#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int atk = 200;
void main() {
	int atk = 100;
	cout << atk << endl;
	cout << ::atk << endl;
}