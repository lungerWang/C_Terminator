#include <iostream>
#include<string>
using namespace std;
class Student {
private:
	int num;
	char name[10];
	char sex;

public:
	Student();
	void display();
};

Student::Student() {
	num = 1001;
	strcpy(name, "suxi");
	sex = 'f';
}

void Student:: display() {
	cout << "ѧ�ţ�" << num << endl;
	cout << "������" << name << endl;
	cout << "�Ա�" << sex << endl;
}