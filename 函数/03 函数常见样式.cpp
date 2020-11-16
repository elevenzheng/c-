#include <iostream>
using namespace std;
//函数常见样式，无参无返，无参有返，有参无返，有参有返

//无参无返
void fun1() {
	cout << "无参无返" << endl;
}

//无参有返
int fun2() {
	return 1;
}

//有参无返
void fun3(int num) {
	cout << "num=" << num << endl;
}

//有参有返
int fun4(int num1, int num2) {
	return num1 + num2;
}

int main() {
	fun1();
	int val = fun2();
	cout << val << endl;
	fun3(3);
	int a = 10, b = 20;
	cout << fun4(a, b) << endl;
	system("pause");
	return 0;
}