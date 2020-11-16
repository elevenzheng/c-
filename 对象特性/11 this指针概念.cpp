#include <iostream>
using namespace std;

class Person {
public:
	int age;
	Person(int age) {
		this->age = age; //this用于区分变量名
	}
	Person& PersonAddAge(const Person& p) {
		this->age += p.age;
		return *this; //返回对象本身
	}
};

void test01() {
	Person p(10);
	Person p2(10);

	p2.PersonAddAge(p).PersonAddAge(p); //第一次调用返回值仍然为p2的引用，故链式操作可叠加，如果采用返回值为值传递，则会在第二次
										//调用时出现隐式转换构造，进而后续操作与p2无关
	cout << "age" << p2.age << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}