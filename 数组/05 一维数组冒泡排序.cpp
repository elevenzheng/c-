#include <iostream>
using namespace std;

int main() {
	//ц╟ещеепР
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}