#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "�޲ι���" << endl;
	}
	Person(int age,int height) {
		m_age = age;
		m_height = new int(height);
		cout << "�вι���" << endl;
	}
	Person(const Person& p) {
		cout << "�������캯��" << endl;
		m_age = p.m_age;
		//m_height = p.m_height; ���о��Ǳ�����Ĭ�Ͽ������캯�������ݣ������ǳ�������ͷ�ʱ���ظ��ͷ�ͬһ��������
		m_height = new int(*p.m_height);//���
	}
	~Person()
	{
		//������ʹ�ö��ϵ��ڴ���������ʱ����Ҫ���������������ж����ڴ��ͷţ���ʱӦ���Զ��忽�����캯��������ǳ��������������
		if (m_height != NULL) {
			delete m_height;
			m_height == NULL;
		}
		cout << "��������" << endl;
	}

	int m_age = 0;
	int* m_height = NULL;
};

void test01() {
	Person p1(18, 150);
	Person p2(p1);
	cout << p1.m_age << *p1.m_height << endl;
	cout << p2.m_age << *p2.m_height << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}