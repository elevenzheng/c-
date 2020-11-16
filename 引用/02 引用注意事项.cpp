#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int& b = a;//引用初始化时就应该直接赋值，且一旦赋值不可更改
	int c = 100;
	b = c;//赋值操作，不是更改引用操作
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}