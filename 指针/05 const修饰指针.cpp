#include <iostream>
using namespace std;

int main() {
	//����ָ��
	int a = 10, b = 20;
	//ָ��ָ���ֵ�����Ըģ�ָ��ָ����Ը�
	const int* p = &a;
	p = &b;

	//ָ�볣��
	int* const p2 = &a;
	//ָ��ָ�򲻿��Ըģ�����ָ��ָ���ֵ���Ը�
	*p2 = 30;

	//const����ָ��ͳ���
	const int* const p3 = &a;
	//ָ���ָ���ָ���ֵ�������Ը�
	system("pause");
	return 0; 
}