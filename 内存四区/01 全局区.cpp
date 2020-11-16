#include <iostream>
using namespace std;

int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main() {
	int a = 10;
	int b = 10;
	cout << "栈区变量" << (int)&a << endl;
	cout << "栈区变量" << (int)&b << endl;

	cout << "全局变量" << (int)&g_a << endl;
	cout << "全局变量" << (int)&g_b << endl;

	cout << "字符串常量" << (int)&"world" << endl;

	static int s_a = 10;
	cout << "静态变量" << (int)&s_a << endl;

	cout << "全局const变量" << (int)&c_g_a << endl;
	cout << "全局const变量" << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;

	cout << "局部const变量" << (int)&c_l_a << endl;
	cout << "局部const变量" << (int)&c_l_b << endl;

	system("pause");
	return 0;
}