#include <iostream>
using namespace std;

void func(int& m) {//int* const m = &a
	m = 1000;
}

int main() {
	int a = 10;
	int& ref = a;//本质是指针常量 int* const ref = &a
			//由于本质是指针常量，所以才说引用一旦初始化就不可以更改
	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl; //本质是*ref
	ref = 20;//*ref = 20
	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;
	func(a);
	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;
	system("pause");
	return 0;
}