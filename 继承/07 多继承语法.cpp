#include <iostream>
using namespace std;

class Base1 {
public:
	int m_A;
	Base1() {
		m_A = 100;
	}
};

class Base2
{
public:
	int m_A;
	Base2() {
		m_A = 200;
	}
};

class Son :public Base1, public Base2 {
public:
	Son() {
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test() {
	Son s;
	cout << sizeof(s) << endl;
	cout << s.Base1::m_A << endl;
	cout << s.Base2::m_A << endl;
}

int main() {
	test();
	system("pause");
	return 0;
}