#include <iostream>
using namespace std;

int main() {
	//switch�е�break
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

	//forѭ���е�break
	/*for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;
		}
		cout << i << endl;
	}*/

	//Ƕ��ѭ���е�break�������˳��ڲ�ѭ��
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