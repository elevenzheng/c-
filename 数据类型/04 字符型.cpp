#include <iostream>
using namespace std;

int main() {
	//字符型变量的初始化
	char ch = 'a';

	//字符型变量占用的内存空间
	cout << sizeof(ch) << endl;

	//字符型变量的常见错误
	//char ch2 = 'abcdef';//单引号内只能有一个字符
	//char ch3 = "aaa";//双引号包含的是字符串，不是字符

	//字符型变量使用ASCII码进行存储
	cout << (int)ch << endl; //底层中存放的并不是字符本身，而是其对应的ASCII码值
	system("pause");
	return 0;
}