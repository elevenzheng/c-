#include <iostream>
using namespace std;

int main() {
	int a = 30;
	int b = 20;
	int c;
	c = a > b ? a : b;
	cout << c << endl;

	(a > b ? a : b) = 100; //C++����Ŀ��������ص��Ǳ����������ٴθ�ֵ
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	system("pause");
	return 0;
}