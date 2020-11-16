#include <iostream>
using namespace std;

int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };

	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr[0][0]) << endl;

	cout << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << arr << endl;
	cout << arr[0] << endl;
	cout << &arr[0][0] << endl;
	system("pause");
	return 0;
}