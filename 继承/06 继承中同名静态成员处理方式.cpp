#include <iostream>
using namespace std;

class Base {
public:
	static int m_A;
	static void func() { //静态成员函数：所有对象共用一个函数/静态成员函数只能访问静态变量
		cout << "Base-func" << endl;
	}
};
int Base::m_A = 100;//静态成员变量：所有对象共享一个/编译阶段分配内存/类内声明，类外初始化

class Son :public Base {
public:
	static int m_A;
	static void func() {
		cout << "Son-func" << endl;
	}
};
int Son::m_A = 200;

void test() {
	//静态成员变量
	//通过对象访问
	Son s;
	Base b;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;
	//通过类名访问
	cout << Son::m_A << endl;
	cout << Son::Base::m_A << endl;//第一个::代表类名访问，第二个::代表作用域

	//静态成员函数
	//通过对象访问
	Son s2;
	s2.func();
	s2.Base::func();
	//通过类名访问
	Son::func();
	Son::Base::func();
}

int main() {
	test();
	system("pause");
	return 0;
}