#include <iostream>
using namespace std;

int main() {
	//ͨ���������ֻ�ȡ����ĳ���
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[1]) << endl;
	cout << sizeof(arr) / sizeof(arr[0]) << endl;

	//ͨ����������ȡ�׵�ַ
	cout << arr << endl;
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;
	system("pause");
	return 0;
}