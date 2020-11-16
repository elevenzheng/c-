#include <iostream>
using namespace std;

class Person
{
public:
	int m_age;
	Person() {
		cout << "无参构造" << endl;
	}
	Person(int a) {
		m_age = a;
		cout << "有参构造" << endl;
	}
	Person(const Person& p) {
		cout << "拷贝构造" << endl;
		m_age = p.m_age;
	}

	~Person()
	{
		cout << "析构函数" << endl;
	}
};

void test01() {
	//括号法
	/*Person p1;
	Person p2(10);
	Person p3(p2);*/
	//注意事项：无参构造不需要括号
	/*Person p1();会被理解成一个返回值为Person的名称为p1的函数的声明*/

	//显示法
	Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);
	//Person(p2);
	/*注意事项，不可以通过拷贝构造函数构造匿名对象，即Person(p2),因为编译器会认为该函数等于Person p2,发生重定义*/

	//隐式转换法
	Person p4 = 10;	//相当于Person p4(10)
	Person p5 = p4;
}

int main() {
	test01();
	system("pause");
	return 0;
}