#include <iostream>
using namespace std;

//��̬��Ա����
/*1.���ж�����
  2.����׶��Ѿ�ռ���ڴ�
  3.���������������ʼ��*/
class Person {
public:
	static int m_a;
private:
	static int m_b;
};

int Person::m_a = 100;//�����ʼ��
int Person::m_b = 1000;

void test01() {
	Person p;
	cout << p.m_a << endl;
	//cout << p.m_b << endl;��̬��Ա����Ҳ�ܵ�Ȩ�޿���

	Person p2;
	p2.m_a = 200; //���ж�����

	cout << p.m_a << endl;        //ͨ���������
	cout << Person::m_a << endl;  //ͨ����������
}

int main() {
	test01();
	system("pause");
	return 0;
}