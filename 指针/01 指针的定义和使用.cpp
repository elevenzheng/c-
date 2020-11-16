#include <iostream>
using namespace std;

int main() {
	//定义指针
	int a = 10;
	//指针定义的方法：数据类型* 指针变量名 = & 变量
	int* p = &a;
	cout << "a的地址为" << &a << endl;
	cout << "指针p为" << p << endl;

	//使用指针
	//通过解引用的方式来找到指针所指向内存的内容
	*p = 1000;
	cout << "a=" << a << endl;
	cout << *p << endl;
	system("pause");
	return 0;
}