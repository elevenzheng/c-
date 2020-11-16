#include <iostream>
using namespace std;

//静态成员函数
/*1 静态成员函数被所有对象共享
  2 静态成员函数只可以访问静态成员变量*/
class Person {
public:
	static int m_A;
	int m_B;
	static void func() {
		m_A = 200;
		//m_B = 100; 静态成员函数不能访问非静态成员变量
	}
private:
	static void func2() {

	}
};

int Person::m_A = 100;

void test01() {
	Person p;
	p.func();

	Person::func();
	//Person::func2();静态成员函数的调用也受到权限控制
}

int main() {
	test01();
	system("pause");
	return 0;
}