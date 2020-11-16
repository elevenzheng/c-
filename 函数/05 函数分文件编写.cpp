#include <iostream>
using namespace std;
#include "swap.h"

//void swap(int a, int b) {
//	int tmp = a;
//	a = b;
//	b = tmp;
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}

int main() {
	int a = 10, b = 20;
	swap(a, b);
	system("pause");
	return 0;
}