#include <iostream>
using namespace std;

class Person {
private:
	int m_Age;
public:
	Person() {
		cout << "�޲ι���" << endl;
	}
	Person(int age) {
		m_Age = age;
		cout << "�вι���" << endl;
	}
	Person(const Person& p) {
		m_Age = p.m_Age;
		cout << "��������" << endl;
	}
	~Person()
	{
		cout << "��������" << endl;
	}
	int getAge() {
		return m_Age;
	}
};

//������������ʱ��
//ͨ��һ���Ѵ��ڵĶ�����һ���µĶ���
void test01() {
	Person p1(10);
	Person p2(p1);

	cout << "p1" << p1.getAge() << endl;
	cout << "p2" << p2.getAge() << endl;
}
//ֵ���ݵķ�ʽ����������
void doWork(Person p) { // Person p = p ��ʽת��

}

void test02() {
	Person p3;
	doWork(p3);
}
//ֵ��ʽ���ؾֲ�����
Person doWork2() {
	Person p(50);
	cout << p.getAge() << endl;
	cout << &p << endl;
	return p;
}

void test03() {
	Person p5 = doWork2();//Person p = p ��ʽת��
	cout << p5.getAge() << endl;
	cout << &p5 << endl;
}
//�����ַ�ʽ������ֵ���ݵķ�����ֻ��ֵ���ݲŻ���п���

void test04() {
	Person p10;
	Person p11(p10);

	cout << &p10 << endl;
	cout << &p11 << endl;
}
int main() {
	//test01();
	//test02();
	//test03();
	test04();
	system("pause");
	return 0;
}