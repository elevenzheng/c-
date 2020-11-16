#include <iostream>
#include <string>
using namespace std;

class A {
private:
	string AName;
public:
	string getName() {
		return AName;
	}
	A(string name) {
		AName = name;
		cout << "A�Ĺ���" << endl;
	}
	A(const A& a) {
		AName = a.AName;
		cout << "A�Ŀ�������" << endl;
	}
	~A()
	{
		cout << "A������" << endl;
	}
};

class B {
private:
	string BName;
	A B_A;
public:
	string getName() {
		return BName;
	}
	A getB_A() {
		return B_A; //���ÿ�������
	}
	B(string bname,string aname):BName(bname),B_A(aname) {//A B_A = aname   ��ʽת������
		cout << "b�Ĺ���" << endl;
	}
	~B()
	{
		cout << "b������" << endl;
	}
};

void test01() {
	B b("bbb", "aaa");
	cout << b.getName() << b.getB_A().getName() << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}