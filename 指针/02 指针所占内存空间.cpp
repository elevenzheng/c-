#include <iostream>
using namespace std;

int main() {
	//ָ���ڴ�ռ��С��32λ�����Ϊ4���ֽ�
	//64λ��Ϊ8���ֽ�
	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(double*) << endl;
	cout << sizeof(float*) << endl;
	system("pause");
	return 0;
}