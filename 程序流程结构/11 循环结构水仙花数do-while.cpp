#include <iostream>
using namespace std;

int main() {
	int num = 100;
	do {
		int a = num / 100;
		int b = (num % 100) / 10;
		int c = num % 10;
		if (a * a * a + b * b * b +c * c * c == num) {
			cout << num << endl;
		}
		num++;
	} while (num <= 999);
	system("pause");
	return 0;
}