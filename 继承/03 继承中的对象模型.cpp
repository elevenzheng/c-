#include <iostream>
using namespace std;

class Base {
	friend void test();
private:
	int m_A;
public:
	int m_B;
	Base() {
		m_A = 10;
		m_B = 20;
	}
};

void test() {
	Base b1;
	cout << b1.m_A << endl;
}

class Son :public Base {
public:
	int m_C;
	Son() {
		m_C = 30;
	}
};

void test02() {
	Son s1;
	cout << sizeof(Son) << endl; //父类中的所有变量都被继承到子类，但是private被隐藏，不可访问  
}

int main() {
	test02();
	system("pause");
	return 0;
}