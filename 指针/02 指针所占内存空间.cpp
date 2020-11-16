#include <iostream>
using namespace std;

int main() {
	//指针内存空间大小，32位情况下为4个字节
	//64位下为8个字节
	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(double*) << endl;
	cout << sizeof(float*) << endl;
	system("pause");
	return 0;
}