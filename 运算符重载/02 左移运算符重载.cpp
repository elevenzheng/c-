#include <iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& cout, Person& p);
private:
	int m_A;
	int m_B;
public:
	Person(int a, int b);
};

Person::Person(int a, int b) {
	m_A = a;
	m_B = b;
}

ostream& operator<<(ostream& cout,Person& p) {
	cout << p.m_A << p.m_B;
	return cout;
}

void test() {
	Person p(10, 10);
	cout << p << endl;
}

int main() {
	test();
	system("pause");
	return 0;
}