#include <iostream>
using namespace std;

class Base {//存在纯虚函数的类称为抽象类
public:
	virtual void func() = 0; //纯虚函数
};


//抽象类的两个特点：抽象类不可以实例化/抽象类的子类必须重写抽象类中的虚函数
class Son :public Base {
public:
	void func() {
		cout << "Son func" << endl;
	}
};

void test() {
	//Base b;//抽象类不可以实例化
	Base* b = new Son;
	b->func();
}

int main() {
	test();
	system("pause");
	return 0;
}