#include <iostream>
using namespace std;

int main() {
	//����ָ����������е�ÿһ��Ԫ��
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	cout << arr[0] << endl;
	cout << *p << endl;
	for (int i = 0; i < 10; i++) {
		cout << *(p + i) << endl;
	}
	cout << *p << endl;
	system("pause");
	return 0;
}