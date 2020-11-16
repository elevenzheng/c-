#include <iostream>
using namespace std;

int main() {
	//Êı×éÄæÖÃ
	int arr[5] = { 1,3,2,5,4 };
	for (int i = 0; i <= 2; i++) {
		int tmp = arr[i];
		arr[i] = arr[5 - i - 1];
		arr[5 - i - 1] = tmp;
	}
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}