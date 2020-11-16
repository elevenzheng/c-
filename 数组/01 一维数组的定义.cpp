#include <iostream>
using namespace std;

int main() {
	//数组类型 数组名[个数]
	int arr1[10];
	arr1[0] = 10;
	arr1[1] = 20;
	arr1[2] = 30;
	arr1[3] = 40;
	arr1[4] = 50;
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << endl;
	}
	//数组类型 数组名[个数]={1,2,3}
	int arr2[5] = { 10,20,30 };
	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << endl;
	}
	//数组类型 数组名[]={1,2,3}
	int arr3[] = { 10,20,30 };
	for (int i = 0; i < 3; i++) {
		cout << arr3[i] << endl;
	}
	system("pause");
	return 0;
}