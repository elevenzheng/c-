#include <iostream>
using namespace std;

int main() {
	//常量指针
	int a = 10, b = 20;
	//指针指向的值不可以改，指针指向可以改
	const int* p = &a;
	p = &b;

	//指针常量
	int* const p2 = &a;
	//指针指向不可以改，但是指针指向的值可以改
	*p2 = 30;

	//const修饰指针和常量
	const int* const p3 = &a;
	//指针的指向和指针的值都不可以改
	system("pause");
	return 0; 
}