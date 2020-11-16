#include <iostream>
using namespace std;
//定义宏常量
#define Day 7

int main() {
	//定义const常量
	const int month = 12;
	//month = 24; const常量不可修改
	//Day = 10; 常量不可修改
	cout << "一周有" << Day << "天" << endl;
	cout << "一年有" << month << "月" << endl;
	system("pause");
	return 0;
}