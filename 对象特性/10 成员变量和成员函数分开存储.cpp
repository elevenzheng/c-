#include <iostream>
#include <string>
using namespace std;

class Person {
	//int m_a;
	double m_b; //�ڴ����2*8=16
	string m_s; //8+8+32(28��32����)
	static int m_c;
	//void func() {};
	static void func2() {};
};

int Person::m_c = 0;

void test01() {
	Person p;
	cout << "sizeof=" << sizeof(p) << endl;//����Ϊ����ʱ����СΪ1������ռλ����
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