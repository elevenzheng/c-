#include <iostream>
using namespace std;

int main() {
	//ǰ�õ���
	int a = 10;
	int b = ++a * 10;
	cout << a << "\t" << b << endl;
	//���õ���
	int c = 10;
	int d = c++ * 10;
	cout << c << "\t" << d << endl;

	//ǰ�õݼ�
	int e = 11;
	int f = --e * 10;
	cout << e << f << endl;
	//���õݼ�
	int g = 11;
	int h = g-- * 10;
	cout << g << h << endl;
	system("pause");
	return 0;
}