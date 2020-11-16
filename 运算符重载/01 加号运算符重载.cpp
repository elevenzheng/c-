#include <iostream>
using namespace std;

class Person {
public:
	int m_A;
	int m_B;
	Person();
	Person(int a,int b);
	Person(const Person& p) {
		this->m_A = p.m_A;
		this->m_B = p.m_B;
		cout << "拷贝" << endl;
	}
	//成员函数方式重载
	/*Person operator+(Person& p) {
		Person tmp;
		tmp.m_A = this->m_A + p.m_A;
		tmp.m_B = this->m_B + p.m_B;
		return tmp;
	}*/
};

Person::Person() {
	m_A = 0;
	m_B = 0;
}

Person::Person(int a,int b) {
	m_A = a;
	m_B = b;
}

//全局函数重载加号
Person operator+(Person& p1, Person& p2) {
	Person tmp;
	tmp.m_A = p1.m_A + p2.m_A;
	tmp.m_B = p1.m_B + p2.m_B;
	return tmp;
}

Person operator+(Person& p1, int t) { //操作符重载支持函数重载，但是不允许同时有功能相同的两个操作符重载函数存在
	Person tmp;
	tmp.m_A = p1.m_A + t;
	tmp.m_B = p1.m_B + t;
	return tmp;
}

Person operator+(Person& p1, Person* p2) {
	Person tmp;
	tmp.m_A = p1.m_A + p2->m_A;
	tmp.m_B = p1.m_B + p2->m_B;
	return tmp;
}

void test01() {
	Person p1(10, 10);
	Person p2(10, 10);

	Person p3 = p1 + p2;
	Person p4 = p1 + 100;
	Person p5 = p1 + &p4;
	cout << p3.m_A << p3.m_B << endl;
	cout << p4.m_A << p4.m_B << endl;
	cout << p5.m_A << p5.m_B << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}