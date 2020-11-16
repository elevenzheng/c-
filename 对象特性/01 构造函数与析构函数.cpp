#include <iostream>
using namespace std;

class Person
{
public:
	//构造函数
	/*1.构造函数没有返回值，也没有void
	  2.构造函数可以有参数，即可重构
	  3.构造函数名与类名一致
	  4.构造函数在创建一个对象时会自动调用*/
	Person() {
		cout << "构造函数" << endl;
	};
	//析构函数
	/*1.析构函数没有返回值，且没有void
	  2.析构函数的函数名与类名一致，但多一个~
	  3.析构函数没有参数，不可重构
	  4.析构函数在销毁对象时自动调用*/
	~Person() {
		cout << "析构函数" << endl;
	};

};

void test01() {
	Person p;
}

int main() {
	//test01();
	Person p;

	system("pause");
	return 0;
}