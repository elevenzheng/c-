#include <iostream>
using namespace std;

int main() {
	//转义字符 \n回车 \t制表符，连着两个\是输出一个\
	
	cout << "hello\nworld" << endl;
	cout << "\\" << endl;
	cout << "a\tb" << endl;
	cout << "aaa\tb" << endl;
	cout << "aaaa\tb" << endl; //\t可以实现对齐，\t占8个位置，但是是包含之前内容在内占8个位置，所以后续内容会对齐
	system("pause");
	return 0;
}