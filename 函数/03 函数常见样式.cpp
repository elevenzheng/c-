#include <iostream>
using namespace std;
//����������ʽ���޲��޷����޲��з����в��޷����в��з�

//�޲��޷�
void fun1() {
	cout << "�޲��޷�" << endl;
}

//�޲��з�
int fun2() {
	return 1;
}

//�в��޷�
void fun3(int num) {
	cout << "num=" << num << endl;
}

//�в��з�
int fun4(int num1, int num2) {
	return num1 + num2;
}

int main() {
	fun1();
	int val = fun2();
	cout << val << endl;
	fun3(3);
	int a = 10, b = 20;
	cout << fun4(a, b) << endl;
	system("pause");
	return 0;
}