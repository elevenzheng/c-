#include <iostream>
using namespace std;

int* fun(int b) {
	int a = 10;
	return &a;
}

int main() {
	int* p = fun(1);
	cout << *p << endl; //��һ����������Ǳ������ı���
	cout << *p << endl; //��Ҫ���ؾֲ������ĵ�ַ����Ϊ�����ú���һ���ͷţ�ջ�ͻᱻ�ͷ�
	system("pause");
	return 0;
}