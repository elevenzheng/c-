#include <iostream>
using namespace std;

//函数重载目的：更方便函数复用
//重载的要求：1.在同一作用域下 2.函数名相同 3.形参种类不同/个数不同/顺序不同

void func() {
	cout << "func" << endl;
}

void func(int a) {
	cout << "func-int" << endl;
}

void func(double a) {
	cout << "func-double" << endl;
}

void func(int a,double b) {
	cout << "func-int-double" << endl;
}

void func(double a, int b) {
	cout << "func-double-int" << endl;
}

//注意：返回类型不能作为区分重载函数的标准

int main() {
	func();
	func(10);
	func(3.1);
	func(10, 3.14);
	func(3.14, 10);
	system("pause");
	return 0;
}