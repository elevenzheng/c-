#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "input scores:" << endl;
	cin >> score;
	switch (score) {
	case 10:
	case 9:
		cout << "1" << endl; break;
	case 8:
	case 7:
		cout << "2" << endl; break;
	case 6:
		cout << "3" << endl; break;
	default:
		cout << "4" << endl; break;
	}
	system("pause");
	return 0;
}