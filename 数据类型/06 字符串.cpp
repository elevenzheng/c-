#include <iostream>
#include <string>
using namespace std;

int main() {
	//C风格的字符串
	//注意事项，char 字符串名[]，等号后面要用双引号
	char str1[] = "hello world";
	cout << str1 << endl;
	//C++风格的字符串
	//建议包含头文件 <string>
	string str2 = "abcdefg";
	cout << str2 << endl;
	system("pause");
	return 0;
}