#include <iostream>
using namespace std;

void sort(int* arr,int len) {
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			/*if ((*(arr + i)) > (*(arr + j))) {
				int tmp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = tmp;
			}*/
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main() {
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	sort(arr,len);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}