#include <iostream>
using namespace std;

//Ĭ������£����������Զ�����Ĭ�Ϲ��죬Ĭ��������Ĭ�Ͽ�������
class Person {
public:
	int m_Age;
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
};

//���ṩ�вι���ʱ�����������ṩ�޲ι��죬���ṩ��������
//���ṩ���������ǣ��������������������ṩ

int main() {

	system("pause");
	return 0;
}