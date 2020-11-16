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
		cout << "A的构造" << endl;
	}
	A(const A& a) {
		AName = a.AName;
		cout << "A的拷贝构造" << endl;
	}
	~A()
	{
		cout << "A的析构" << endl;
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
		return B_A; //调用拷贝构造
	}
	B(string bname,string aname):BName(bname),B_A(aname) {//A B_A = aname   隐式转换构造
		cout << "b的构造" << endl;
	}
	~B()
	{
		cout << "b的析构" << endl;
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