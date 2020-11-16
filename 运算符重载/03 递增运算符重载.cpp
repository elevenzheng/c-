#include <iostream>
using namespace std;

class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger myint);
private:
	int m_num;
public:
	MyInteger() {
		m_num = 0;
		cout << "w" << endl;
	}
	MyInteger(const MyInteger& mint) {
		m_num = mint.m_num;
		cout << "kb" << endl;
	}
	~MyInteger()
	{
		cout << "xi";
	}
	MyInteger& operator++() {//前置++，返回引用是为了对同一个数据操作，前置++可以链式操作
		++m_num;
		return *this;
	}
	MyInteger operator++(int) {//后置++,int是占位符
		MyInteger tmp = *this;
		m_num++;
		return tmp;
	}
};

ostream& operator<<(ostream& cout, MyInteger myint) { //注意，这里的第二个参数不是引用，因为在后置++返回时，只能返回局部变量(拷贝),
													//因为不能访问局部变量的引用
	cout << myint.m_num << endl;
	return cout;
}

void test01() {
	MyInteger myint;
	cout << ++myint << endl;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02() {
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}