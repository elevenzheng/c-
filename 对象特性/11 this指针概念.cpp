#include <iostream>
using namespace std;

class Person {
public:
	int age;
	Person(int age) {
		this->age = age; //this�������ֱ�����
	}
	Person& PersonAddAge(const Person& p) {
		this->age += p.age;
		return *this; //���ض�����
	}
};

void test01() {
	Person p(10);
	Person p2(10);

	p2.PersonAddAge(p).PersonAddAge(p); //��һ�ε��÷���ֵ��ȻΪp2�����ã�����ʽ�����ɵ��ӣ�������÷���ֵΪֵ���ݣ�����ڵڶ���
										//����ʱ������ʽת�����죬��������������p2�޹�
	cout << "age" << p2.age << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}