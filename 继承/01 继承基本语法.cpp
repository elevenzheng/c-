#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	void mouth() {
		cout << "mouth" << endl;
	}
	void tail() {
		cout << "tail" << endl;
	}
};

class Cat :public Animal {
public:
	void type() {
		cout << "buou" << endl;
	}
};

void test() {
	Cat cat;
	cat.mouth();
	cat.tail();
	cat.type();
}

int main() {
	test();
	system("pause");
	return 0;
}