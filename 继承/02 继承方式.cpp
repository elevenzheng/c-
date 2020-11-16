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
		cout << m_A << m_B << endl;// << m_C;m_C不可访问，因为其是父类的private
	}
};

void test01() {
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//protected类外不可访问
}

class Son2 :protected Base {
public:
	void fun() {
		cout << m_A << m_B << endl;// << m_C;m_C不可访问，因为其是父类的private
	}
};

void test02() {
	Son2 s2;
	//s2.m_A = 100;//protected类外不可访问
	//s1.m_B = 100;//protected类外不可访问
}

class Son3 :private Base {
public:
	void fun() {
		cout << m_A << m_B << endl;// << m_C;m_C不可访问，因为其是父类的private
	}
};

void test03() {
	Son3 s3;
	//s3.m_A = 100;//private类外不可访问
	//s1.m_B = 100;//private类外不可访问
}

int main() {

	system("pause");
	return 0;
}