#include <iostream>
using namespace std;

int main() {
	//利用sizeof求出数据类型占用的内存大小
	//sizeof(数据类型/变量名称) 由于变量在定义时已经给定了数据类型，所以也可以实现同样的功能
	//short < int <= long <= long long
	short num1 = 10;
	cout << "short占用的内存空间为" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "int占用的内存空间为" << sizeof(int) << endl;
	cout << "long占用的内存空间为" << sizeof(long) << endl;
	cout << "long long占用的内存空间为" << sizeof(long long) << endl;
	system("pause");
	return 0;
}