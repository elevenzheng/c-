#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int a = 10, b = 20;
	swap(&a, &b);
	cout << a << endl;
	cout << b << endl;
	system("pause");
	return 0;
}