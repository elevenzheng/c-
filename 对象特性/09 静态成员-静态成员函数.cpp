#include <iostream>
using namespace std;

//��̬��Ա����
/*1 ��̬��Ա���������ж�����
  2 ��̬��Ա����ֻ���Է��ʾ�̬��Ա����*/
class Person {
public:
	static int m_A;
	int m_B;
	static void func() {
		m_A = 200;
		//m_B = 100; ��̬��Ա�������ܷ��ʷǾ�̬��Ա����
	}
private:
	static void func2() {

	}
};

int Person::m_A = 100;

void test01() {
	Person p;
	p.func();

	Person::func();
	//Person::func2();��̬��Ա�����ĵ���Ҳ�ܵ�Ȩ�޿���
}

int main() {
	test01();
	system("pause");
	return 0;
}