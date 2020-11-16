#include <iostream>
using namespace std;

class Base {
public:
	int m_A;
	Base(){
		m_A = 100;
	}
	void func() {
		cout << "base-func" << endl;
	}
	void func(int a) {
		cout << "base-func-int" << endl;
	}
};

class Son:public Base {
public:
	int m_A;
	Son() {
		m_A = 200;
	}
	void func() {
		cout << "son-func" << endl;
	}
};

void test() {
	Son s;
	cout << s.m_A << endl;;
	cout << s.Base::m_A << endl;//���ʸ���ͬ����������Ҫ���ϸ����������
	s.func();
	s.Base::func();//�����е����������ڸ������������أ��������г���ͬ������֮�����еĺ������ᱻ���ǣ�������ø���ģ������������
	s.Base::func(1000);
}

int main() {
	test();
	system("pause");
	return 0;
}