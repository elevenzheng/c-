#include <iostream>
using namespace std;

//ռλ��������ʱ���ռλ����ֵ����ռλ��������Ĭ��ֵ
void func(int a, int = 10) {
	cout << "aaaaaa" << endl;
}

int main() {
	func(10, 5);
	system("pause");
	return 0;
}