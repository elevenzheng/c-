#include <iostream>
using namespace std;

void func(int& m) {//int* const m = &a
	m = 1000;
}

int main() {
	int a = 10;
	int& ref = a;//������ָ�볣�� int* const ref = &a
			//���ڱ�����ָ�볣�������Բ�˵����һ����ʼ���Ͳ����Ը���
	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl; //������*ref
	ref = 20;//*ref = 20
	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;
	func(a);
	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;
	system("pause");
	return 0;
}