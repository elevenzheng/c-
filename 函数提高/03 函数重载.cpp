#include <iostream>
using namespace std;

//��������Ŀ�ģ������㺯������
//���ص�Ҫ��1.��ͬһ�������� 2.��������ͬ 3.�β����಻ͬ/������ͬ/˳��ͬ

void func() {
	cout << "func" << endl;
}

void func(int a) {
	cout << "func-int" << endl;
}

void func(double a) {
	cout << "func-double" << endl;
}

void func(int a,double b) {
	cout << "func-int-double" << endl;
}

void func(double a, int b) {
	cout << "func-double-int" << endl;
}

//ע�⣺�������Ͳ�����Ϊ�������غ����ı�׼

int main() {
	func();
	func(10);
	func(3.1);
	func(10, 3.14);
	func(3.14, 10);
	system("pause");
	return 0;
}