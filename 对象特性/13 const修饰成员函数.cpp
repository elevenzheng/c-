#include <iostream>
using namespace std;

class Person {
public:
	mutable int m_age;
	Person() {

	}
	Person(int age) {
		m_age = age;
	}

	void showInfo() const {
		m_age = 20;
		cout << "age=" << m_age << endl;
	}
};

void test() {
	Person p(10);
	p.showInfo();
}

int main() {
	test();
	system("pause");
	return 0;
}