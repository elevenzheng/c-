#include <iostream>
using namespace std;

class Person
{
public:
	int m_age;
	Person() {
		cout << "�޲ι���" << endl;
	}
	Person(int a) {
		m_age = a;
		cout << "�вι���" << endl;
	}
	Person(const Person& p) {
		cout << "��������" << endl;
		m_age = p.m_age;
	}

	~Person()
	{
		cout << "��������" << endl;
	}
};

void test01() {
	//���ŷ�
	/*Person p1;
	Person p2(10);
	Person p3(p2);*/
	//ע������޲ι��첻��Ҫ����
	/*Person p1();�ᱻ����һ������ֵΪPerson������Ϊp1�ĺ���������*/

	//��ʾ��
	Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);
	//Person(p2);
	/*ע�����������ͨ���������캯�������������󣬼�Person(p2),��Ϊ����������Ϊ�ú�������Person p2,�����ض���*/

	//��ʽת����
	Person p4 = 10;	//�൱��Person p4(10)
	Person p5 = p4;
}

int main() {
	test01();
	system("pause");
	return 0;
}