#include <iostream>
using namespace std;

//静态成员变量
/*1.所有对象共享
  2.编译阶段已经占用内存
  3.类内声明，类外初始化*/
class Person {
public:
	static int m_a;
private:
	static int m_b;
};

int Person::m_a = 100;//类外初始化
int Person::m_b = 1000;

void test01() {
	Person p;
	cout << p.m_a << endl;
	//cout << p.m_b << endl;静态成员变量也受到权限控制

	Person p2;
	p2.m_a = 200; //所有对象共享

	cout << p.m_a << endl;        //通过对象调用
	cout << Person::m_a << endl;  //通过类名调用
}

int main() {
	test01();
	system("pause");
	return 0;
}