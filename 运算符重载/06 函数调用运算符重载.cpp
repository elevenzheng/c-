#include <iostream>
#include <string>
using namespace std;

class MyPrint {
public:
	void operator()(string test) {
		cout << test << endl;
	}
};

void test01() {
	MyPrint myprint;
	myprint("hello");
}

class MyAdd {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};

void test02() {
	MyAdd myadd;
	int ret = myadd(1, 9); //因使用结构与函数类似，故称仿函数
	cout << ret << endl;

	cout << MyAdd()(10, 10) << endl; //通过使用匿名函数实现对于仿函数的调用
}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}