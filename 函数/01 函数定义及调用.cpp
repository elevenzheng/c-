#include <iostream>
using namespace std;

int add(int num1, int num2) {
	return num1 + num2;
}

int main() {
	//sum�������
	int a = 5, b = 9, c;
	c = add(a, b);
	cout << c << endl;
	system("pause");
	return 0;
}