#include <iostream>
using namespace std;

int* fun() {
	int* p = new int(10);
	return p;
}

int main() {
	int* m = fun();
	cout << *m << endl;
	cout << *m << endl;
	cout << *m << endl;
	cout << *m << endl;
	system("pause");
	return 0;
}