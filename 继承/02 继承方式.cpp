#include <iostream>
#include <string>
using namespace std;

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base {
public:
	void fun() {
		cout << m_A << m_B << endl;// << m_C;m_C���ɷ��ʣ���Ϊ���Ǹ����private
	}
};

void test01() {
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//protected���ⲻ�ɷ���
}

class Son2 :protected Base {
public:
	void fun() {
		cout << m_A << m_B << endl;// << m_C;m_C���ɷ��ʣ���Ϊ���Ǹ����private
	}
};

void test02() {
	Son2 s2;
	//s2.m_A = 100;//protected���ⲻ�ɷ���
	//s1.m_B = 100;//protected���ⲻ�ɷ���
}

class Son3 :private Base {
public:
	void fun() {
		cout << m_A << m_B << endl;// << m_C;m_C���ɷ��ʣ���Ϊ���Ǹ����private
	}
};

void test03() {
	Son3 s3;
	//s3.m_A = 100;//private���ⲻ�ɷ���
	//s1.m_B = 100;//private���ⲻ�ɷ���
}

int main() {

	system("pause");
	return 0;
}