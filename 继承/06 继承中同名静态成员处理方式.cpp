#include <iostream>
using namespace std;

class Base {
public:
	static int m_A;
	static void func() { //��̬��Ա���������ж�����һ������/��̬��Ա����ֻ�ܷ��ʾ�̬����
		cout << "Base-func" << endl;
	}
};
int Base::m_A = 100;//��̬��Ա���������ж�����һ��/����׶η����ڴ�/���������������ʼ��

class Son :public Base {
public:
	static int m_A;
	static void func() {
		cout << "Son-func" << endl;
	}
};
int Son::m_A = 200;

void test() {
	//��̬��Ա����
	//ͨ���������
	Son s;
	Base b;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;
	//ͨ����������
	cout << Son::m_A << endl;
	cout << Son::Base::m_A << endl;//��һ��::�����������ʣ��ڶ���::����������

	//��̬��Ա����
	//ͨ���������
	Son s2;
	s2.func();
	s2.Base::func();
	//ͨ����������
	Son::func();
	Son::Base::func();
}

int main() {
	test();
	system("pause");
	return 0;
}