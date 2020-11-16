#include <iostream>
using namespace std;

//值传递过程中，形参的变化不会影响实参
void swap(int num1, int num2) {
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int tmp = num1;
	num1 = num2;
	num2 = tmp;

	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
}

int main() {
	//值传递
	int a = 10, b = 20;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	swap(a, b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}