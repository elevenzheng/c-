#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int& b = a;//���ó�ʼ��ʱ��Ӧ��ֱ�Ӹ�ֵ����һ����ֵ���ɸ���
	int c = 100;
	b = c;//��ֵ���������Ǹ������ò���
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}