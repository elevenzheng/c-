#include <iostream>
using namespace std;

void swap01(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap02(int* p, int* q) {
	int tmp = *p;
	*p = *q;
	*q = tmp;
}

void swap03(int& m, int& n) {//��ʱ�൱��m��a�ı������޸�m�͵����޸�a
	int tmp = m;
	m = n;
	n = tmp;
	cout << "m" << m << endl;
}

int main() {
	int a = 10, b = 20;
	swap01(a, b);//ֵ����
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	swap02(&a, &b);//��ַ����
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	swap03(a, b);//���ô���
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//Ҳ����ʵ����ֵ����
	system("pause");
	return 0;
}