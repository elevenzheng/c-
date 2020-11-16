#include <iostream>
using namespace std;

int b = 10;

int& test01() {
	int a = 10;//数据在栈区
	return a;
}

int& test02() {
	//static int a = 10;//数据在全局区
	return b;//返回的就是对应变量的引用，也就是该变量
		//采用全局变量的原因是局部静态变量在main中无法访问,但局部静态变量的值可以通过引用传递
}

int main() {
	int& val = test01();
	cout << val << endl;
	cout << val << endl;//不可返回局部变量

	int& rel = test02();
	cout << rel << endl;
	cout << "b" << b << endl;
	test02() = 1000;//函数调用可以作为左值，对返回的变量的引用赋值，就相当于直接对原变量进行修改
	cout << rel << endl;
	cout << "b" << b << endl;//可以看出，上述函数做左值，直接修改了本来的函数值
	system("pause");
	return 0;
}
