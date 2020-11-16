#include <iostream>
using namespace std;

int main() {
	//单行if语句
	int score = 0;
	cout << "请输入分数" << endl;
	cin >> score;
	cout << "输入的分数为" << score << endl;
	if (score > 60) {
		cout << "及格" << endl;
	}
	system("pause");
	return 0;
}