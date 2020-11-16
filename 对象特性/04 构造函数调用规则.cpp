#include <iostream>
using namespace std;

//默认情况下，编译器会自动生成默认构造，默认析构，默认拷贝构造
class Person {
public:
	int m_Age;
	Person() {
		cout << "无参构造" << endl;
	}
	Person(int age) {
		m_Age = age;
		cout << "有参构造" << endl;
	}
	Person(const Person& p) {
		m_Age = p.m_Age;
		cout << "拷贝构造" << endl;
	}
	~Person()
	{
		cout << "析构函数" << endl;
	}
};

//当提供有参构造时，编译器不提供无参构造，但提供拷贝构造
//当提供拷贝构造是，编译器另外两个都不提供

int main() {

	system("pause");
	return 0;
}