#include <iostream>
using namespace std;

int main() {
	//switch中的break
	/*int level = 0;
	cout << "input your want level" << endl;
	cin >> level;
	switch (level)
	{
	case 1:
		cout << "1" << endl;
		break;
	case 2:
		cout << "2" << endl;
		break;
	case 3:
		cout << "3" << endl;
		break;
	default:
		break;
	}*/

	//for循环中的break
	/*for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;
		}
		cout << i << endl;
	}*/

	//嵌套循环中的break，优先退出内层循环
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			if (j == 5) {
				break;
			}
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}