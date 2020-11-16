#include <iostream>
using namespace std;

int main() {
	//·Ç
	int a = 10;
	cout << !a << endl;
	cout << !!a << endl;

	//»ò
	a = 10;
	int b = 10;
	cout << (a || b) << endl;
	a = 0;
	b = 10;
	cout << (a || b) << endl;
	a = 0;
	b = 0;
	cout << (a || b) << endl;

	//Óë
	a = 10;
	b = 10;
	cout << (a && b) << endl;
	a = 0;
	b = 10;
	cout << (a && b) << endl;
	a = 0;
	b = 0;
	cout << (a && b) << endl;


	system("pause");
	return 0;
}