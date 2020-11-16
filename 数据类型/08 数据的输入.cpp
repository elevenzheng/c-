#include <iostream>
using namespace std;

int main() {
	//1.整形
	/*int a;
	cout << "输入数" << endl;
	cin >> a;
	cout << "a=" << a << endl;*/
	//2.浮点型
	float f1;
	cout << "输入小数" << endl;
	cin >> f1;
	cout << "f1=" << f1 << endl;
	//3.字符型
	char ch;
	cout << "输入字符" << endl;
	cin >> ch;
	cout << "ch=" << ch << endl;
	//4.字符串
	string str;
	cout << "输入字符串" << endl;
	cin >> str;
	cout << "str=" << str << endl;
	//5.bool型
	bool flag;
	cout << "输入bool型" << endl;
	cin >> flag;
	cout << "flag=" << flag << endl;
	system("pause");
	return 0;
}