#include <iostream>
using namespace std;

int main() {
	//Ĭ���������6λ��Ч����
	//������ float
	float f1 = 3.14f;
	//˫���� double
	double d1 = 3.14;

	//ͳ��float��doubleռ�õ��ڴ�ռ��С
	cout << sizeof(f1) + sizeof(d1) << endl; // 4 + 8

	//��ѧ������
	float f2 = 3e2; // 3 * 10 ^ 2
	float f3 = 3e-2; // 3 * 0.1 ^ 2
	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;
	system("pause");
	return 0;
}