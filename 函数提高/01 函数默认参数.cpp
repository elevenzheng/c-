#include <iostream>
using namespace std;

//如果函数的初始化时有默认参数，则从左往右，第一个有默认参数的形参起，后续都应该有默认参数
int func01(int a ,int b = 10,int c = 20) {
	return a + b + c;
}

//如果在函数声明的时候就给定了函数的默认参数，则不应该在函数实现的时候再次给定默认参数，会出现重载形参的现象
//声明和实现只能有一个有默认参数
int func02(int a = 10, int b = 20);

int func02(int a, int b) {
	return a + b;
}

int main() {
	cout << func01(100) << endl;
	cout << func01(100, 50) << endl;

	cout << func02() << endl;
	system("pause");
	return 0;
}