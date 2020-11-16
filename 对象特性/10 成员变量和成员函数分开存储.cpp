#include <iostream>
#include <string>
using namespace std;

class Person {
	//int m_a;
	double m_b; //内存对齐2*8=16
	string m_s; //8+8+32(28向32对齐)
	static int m_c;
	//void func() {};
	static void func2() {};
};

int Person::m_c = 0;

void test01() {
	Person p;
	cout << "sizeof=" << sizeof(p) << endl;//当类为空类时，大小为1，用来占位区分
}

void test02() {
	Person p;
	cout << "sizeof=" << sizeof(p) << endl;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}