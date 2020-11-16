#include <iostream>
using namespace std;

//声明用于提前告诉编译器函数的存在，声明可以存在多次，但函数定义只能有一次
int max(int a, int b);
//当函数声明存在时，可以将函数的具体定义卸载main之后

int main() {
	int a = 10, b = 20;

	cout << max(a, b) << endl;
	system("pause");
	return 0;
}

int max(int a, int b) {
	return a > b ? a : b;
}