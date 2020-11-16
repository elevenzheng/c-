#include <iostream>
#include <string>
using namespace std;

//三种访问权限
//public：类内可以访问，类外也可以访问
//protected：类内可以访问，类外不可以访问，但子类可以访问父类的protected成员
//private：类内可以访问，类外不可以访问，子类不可以访问父类的protected成员

class Person
{
public:
	string m_name;
protected:
	string m_book;
private:
	int m_password;
public:
	void func() { //类内均可访问
		m_name = "a";
		m_book = "b";
		m_password = 1;
	}
};

int main() {
	Person p;
	p.m_name = "p";
	p.func(); //类外只可以访问public成员
	//p.m_password = 2; 私有成员和保护成员类外不可访问
	system("pause");
	return 0;
}