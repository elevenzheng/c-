#include <iostream>
using namespace std;

//ע������
//1.������Ϊ����
void func(int& a) {
	cout << "func(int* a)" << endl;
}

void func(const int& a) {
	cout << "func(const int* a)" << endl;
}
//2.������������Ĭ�ϲ���
void func2(int a, int b = 10) {
	cout << "func2(int a,int b)" << endl;
}

void func2(int a) {
	cout << "func2(int a)" << endl;
}

int main() {
	const int a = 10;
	func(a);
	func(10);//const int& a = 10;==> int tmp = 10; const int& a = tmp;
	//func2(10);Ӧ�����ں�������ʱ���ֺ���Ĭ�ϲ����ĺ���
	system("pause");
	return 0;
}