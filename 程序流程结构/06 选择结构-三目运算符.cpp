#include <iostream>
using namespace std;

int main() {
	int a = 30;
	int b = 20;
	int c;
	c = a > b ? a : b;
	cout << c << endl;

	(a > b ? a : b) = 100; //C++中三目运算符返回的是变量，可以再次赋值
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	system("pause");
	return 0;
}