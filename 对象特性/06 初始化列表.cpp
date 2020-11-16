#include <iostream>
using namespace std;

class Person {
private:
	int m_a;
	const int m_b;
	int m_c;
public:
	
	Person(int a, int b, int c) :m_a(a), m_b(b), m_c(c) { //初始化列表

	}
	void printInfo() {
		cout << "m_a" << m_a << endl;
		cout << "m_b" << m_b << endl;
		cout << "m_c" << m_c << endl;
	}
};

int main() {
	Person p(10, 20, 30);
	p.printInfo();

	system("pause");
	return 0;
}