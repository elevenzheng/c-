#include <iostream>
using namespace std;

void showValue(const int& val) {
	//val++; 误操作，为了避免，在形参加一个const
	cout << "val=" << val << endl;
}

int main() {
	//int a = 10;
	//int& ref = a;

	//int* p = new int(10);
	//int& val = *p;// int* const val = &(*p)
	//cout << val << endl;
	//val = 20;
	//cout << *p;   引用可以指向堆区的内容

	//常量引用
	const int& ref = 10;//相当于int tmp = 10; const int& ref = tmp;
	//ref = 20; 不成功 相当于 const int* const ref = &tmp   即不可修改指向也不可以修改值

	//使用场景：用来修饰形参，防止误操作
		//此处的思想与结构体形参加const一致
	int a = 100;
	showValue(a);

	cout << "a=" << a << endl;
	system("pause");
	return 0;
}