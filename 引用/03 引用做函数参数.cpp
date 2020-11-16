#include <iostream>
using namespace std;

void swap01(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap02(int* p, int* q) {
	int tmp = *p;
	*p = *q;
	*q = tmp;
}

void swap03(int& m, int& n) {//此时相当于m是a的别名，修改m就等于修改a
	int tmp = m;
	m = n;
	n = tmp;
	cout << "m" << m << endl;
}

int main() {
	int a = 10, b = 20;
	swap01(a, b);//值传递
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	swap02(&a, &b);//地址传递
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	swap03(a, b);//引用传递
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//也可以实现数值交换
	system("pause");
	return 0;
}