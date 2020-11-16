#include <iostream>
using namespace std;

//占位符，调用时需给占位符传值，且占位符可以有默认值
void func(int a, int = 10) {
	cout << "aaaaaa" << endl;
}

int main() {
	func(10, 5);
	system("pause");
	return 0;
}