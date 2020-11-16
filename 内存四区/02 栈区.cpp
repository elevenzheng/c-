#include <iostream>
using namespace std;

int* fun(int b) {
	int a = 10;
	return &a;
}

int main() {
	int* p = fun(1);
	cout << *p << endl; //第一次正常输出是编译器的保护
	cout << *p << endl; //不要返回局部变量的地址，因为被调用函数一旦释放，栈就会被释放
	system("pause");
	return 0;
}