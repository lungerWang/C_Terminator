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
	cout << "学号：" << num << endl;
	cout << "姓名：" << name << endl;
	cout << "性别：" << sex << endl;
}