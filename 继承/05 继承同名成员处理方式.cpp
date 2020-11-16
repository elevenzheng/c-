#include <iostream>
using namespace std;

class Base {
public:
	int m_A;
	Base(){
		m_A = 100;
	}
	void func() {
		cout << "base-func" << endl;
	}
	void func(int a) {
		cout << "base-func-int" << endl;
	}
};

class Son:public Base {
public:
	int m_A;
	Son() {
		m_A = 200;
	}
	void func() {
		cout << "son-func" << endl;
	}
};

void test() {
	Son s;
	cout << s.m_A << endl;;
	cout << s.Base::m_A << endl;//访问父类同名变量，需要加上父类的作用域
	s.func();
	s.Base::func();//父类中的重名函数在父类中属于重载，在子类中出现同名函数之后，所有的函数都会被覆盖，若想调用父类的，必须加作用域
	s.Base::func(1000);
}

int main() {
	test();
	system("pause");
	return 0;
}