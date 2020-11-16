#include <iostream>
using namespace std;
#include <ctime>

int main() {
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	int val;
	while (1) {
		cout << "input your number" << endl;
		cin >> val;
		if (val > num) {
			cout << "number is large" << endl;
		}
		else if (val < num) {
			cout << "number is small" << endl;
		}
		else {
			cout << "right" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}