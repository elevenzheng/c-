#include <iostream>
using namespace std;

int main() {
	//默认情况下是6位有效数字
	//单精度 float
	float f1 = 3.14f;
	//双精度 double
	double d1 = 3.14;

	//统计float和double占用的内存空间大小
	cout << sizeof(f1) + sizeof(d1) << endl; // 4 + 8

	//科学计数法
	float f2 = 3e2; // 3 * 10 ^ 2
	float f3 = 3e-2; // 3 * 0.1 ^ 2
	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;
	system("pause");
	return 0;
}