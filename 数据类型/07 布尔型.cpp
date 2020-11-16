#include <iostream>
using namespace std;

int main() {
	//创建bool数据类型
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;//0代表假，非0是真
	//查看bool类型所占用的内存大小
	cout << sizeof(flag) << endl;
	system("pause");
	return 0;
}