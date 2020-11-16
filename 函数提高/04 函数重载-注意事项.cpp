#include <iostream>
using namespace std;

//注意事项
//1.引用作为参数
void func(int& a) {
	cout << "func(int* a)" << endl;
}

void func(const int& a) {
	cout << "func(const int* a)" << endl;
}
//2.函数重载碰到默认参数
void func2(int a, int b = 10) {
	cout << "func2(int a,int b)" << endl;
}

void func2(int a) {
	cout << "func2(int a)" << endl;
}

int main() {
	const int a = 10;
	func(a);
	func(10);//const int& a = 10;==> int tmp = 10; const int& a = tmp;
	//func2(10);应避免在函数重载时出现含有默认参数的函数
	system("pause");
	return 0;
}