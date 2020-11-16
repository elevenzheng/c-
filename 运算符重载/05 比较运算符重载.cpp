#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	string m_name;
	int m_Age;
	Person(string name, int age) {
		m_name = name;
		m_Age = age;
	}

	bool operator==(Person& p) {
		if (this->m_name == p.m_name && this->m_Age == p.m_Age) {
			return 1;
		}
		return 0;
	}

	bool operator!=(Person& p) {
		if (this->m_name == p.m_name && this->m_Age == p.m_Age) {
			return 0;
		}
		return 1;
	}
};

void test01() {
	Person p1("a", 10);
	Person p2("a", 10);
	if (p1 == p2) {
		cout << "p1等于p2" << endl;
	}
	else {
		cout << "p1不等于p2" << endl;
	}

	if (p1 != p2) {
		cout << "p1不等于p2" << endl;
	}
	else {
		cout << "p1等于p2" << endl;
	}
}

int main() {
	test01();
	system("pause");
	return 0;
}