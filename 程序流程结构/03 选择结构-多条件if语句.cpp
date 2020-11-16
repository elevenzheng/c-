#include <iostream>
using namespace std;

int main() {
	//¶àÌõ¼şifÓï¾ä
	int score = 0;
	cout << "input your score:" << endl;
	cin >> score;
	cout << "your score is " << score << endl;
	if (score > 90) {
		cout << "A" << endl;
	}
	else if (score > 80) {
		cout << "B" << endl;
	}
	else {
		cout << "not pass" << endl;
	}
	system("pause");
	return 0;
}