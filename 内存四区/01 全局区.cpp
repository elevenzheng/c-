#include <iostream>
using namespace std;

int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main() {
	int a = 10;
	int b = 10;
	cout << "ջ������" << (int)&a << endl;
	cout << "ջ������" << (int)&b << endl;

	cout << "ȫ�ֱ���" << (int)&g_a << endl;
	cout << "ȫ�ֱ���" << (int)&g_b << endl;

	cout << "�ַ�������" << (int)&"world" << endl;

	static int s_a = 10;
	cout << "��̬����" << (int)&s_a << endl;

	cout << "ȫ��const����" << (int)&c_g_a << endl;
	cout << "ȫ��const����" << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;

	cout << "�ֲ�const����" << (int)&c_l_a << endl;
	cout << "�ֲ�const����" << (int)&c_l_b << endl;

	system("pause");
	return 0;
}