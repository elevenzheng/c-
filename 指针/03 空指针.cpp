#include <iostream>
using namespace std;

int main() {
	//空指针用于给指针变量进行初始化
	int* p = NULL;
	//空指针不可以被访问 
	//0~255之间的内存编号是系统占用的，不可访问
	cout << *p << endl;
	system("pause");
	return 0;
}