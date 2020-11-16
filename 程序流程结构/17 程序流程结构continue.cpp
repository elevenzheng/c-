#include <iostream>
using namespace std;

int main() {
	//continue跳出当前循环，进入下一轮循环
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			continue;
		}
		cout << i << endl;
	}
	system("pause");
	return 0;
}