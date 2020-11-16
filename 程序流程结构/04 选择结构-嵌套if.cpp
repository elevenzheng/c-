#include <iostream>
using namespace std;

int main() {
	int score = 0;
	cout << "input score" << endl;
	cin >> score;
	cout << "your score is " << score << endl;
	if (score > 600) {
		cout << "1" << endl;
		if (score > 700) {
			cout << "BD" << endl;
		}
		else if (score > 650) {
			cout << "QH" << endl;
		}
		else {
			cout << "RD" << endl;
		}
	}
	else if (score > 500) {
		cout << "2" << endl;
	}
	else if (score > 400) {
		cout << "3" << endl;
	}
	else {
		cout << "0" << endl;
	}
	system("pause");
	return 0;
}