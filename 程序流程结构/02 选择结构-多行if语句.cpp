#include <iostream>
using namespace std;

int main() {
	int scores = 0;
	cout << "input score" << endl;
	cin >> scores;
	cout << "you input score is " << endl;
	if (scores > 60) {
		cout << "pass" << endl;
	}
	else {
		cout << "not pass" << endl;
	}
	system("pause");
	return 0;
}