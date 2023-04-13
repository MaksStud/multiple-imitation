#include<iostream>

using namespace std;

class Mother
{
public:
	Mother() {
		age = 30;
		name = "Sofia";
		skill = "Singing";
		hobby = "Run";
	}
	~Mother() {
		cout << "Detructor Mother" << endl;
	}

	void WhatASkill() {
		cout << skill << endl;
	}

	void Hobby() {
		cout << hobby << endl;
	}

	Mother(int a, string n, string s, string h) {
		age = a;
		name = n;
		skill = s;
		hobby = h;
	}

private:
	int age;
	string name;
	string skill;
	string hobby;
};

class Father
{
public:
	Father() {
		age = 33;
		name = "Anton";
		skill = "Knowledge in mathematics";
		hobby = "Play Chess";
	}

	Father(int a, string n, string s, string h) {
		age = a;
		name = n;
		skill = s;
		hobby = h;
	}

	~Father() {
		cout << "Detructor Mother" << endl;
	}

	void WhatASkill() {
		cout << skill << endl;
	}

	void Hobby() {
		cout << hobby << endl;
	}

private:
	int age;
	string name;
	string skill;
	string hobby;
};

class Child : public Mother, public Father
{
public:
	
	Child() : Mother(), Father() {
		cout << "Constructor Child" << endl;
	}

	~Child(){
		cout << "Constructor Child" << endl;
	}


};

int main() {
	Child ch1;
	ch1.Father::Hobby();
	ch1.Mother::WhatASkill();
	cout << endl;
	Child ch2;
	ch2.Mother::Hobby();
	ch2.Father::WhatASkill();

	cout << endl;
	cout << endl;

	system("pause");
	return 0;
}
