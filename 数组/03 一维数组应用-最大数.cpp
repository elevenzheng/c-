#include <iostream>
using namespace std;

int main() {
	//������������Ԫ��
	int arr[5] = { 300,250,200,500,250 };
	int val = arr[0];
	for (int i = 1; i < 5; i++) {
		if(arr[i] > val){
			val = arr[i];
		}
	}
	cout << val << endl;
	system("pause");
	return 0;
}