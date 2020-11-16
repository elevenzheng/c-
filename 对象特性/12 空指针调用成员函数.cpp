#include <iostream>
using namespace std;

class Person {
public:
	int m_age;
	void showInfo() {
		cout << "aaaa" << endl;
	}
	void showAge() {
		if (this == NULL) {
			return;
		}
		cout << "age=" << this->m_age << endl;
	}
};

void test01() {
	Person* p = NULL;
	p->showAge();
	p->showInfo(); //空指针可以访问成员函数，但是不能涉及成员变量因为所有成员变量隐含this，但是this==Null，操作不可行
}



int main() {
	test01();
	system("pause");
	return 0;
}