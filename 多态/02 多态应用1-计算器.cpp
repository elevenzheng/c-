#include <iostream>
using namespace std;

class Calculator {
public:
	virtual int getResult() {
		return 0;
	}
	int m_num1;
	int m_num2;
};

class AddCalculator :public Calculator {
public:
	int getResult() {
		return m_num1 + m_num2;
	}
};

class SubCalculator :public Calculator {
public:
	int getResult() {
		return m_num1 - m_num2;
	}
};

void test() {
	Calculator* cal = new AddCalculator;
	cal->m_num1 = 10;
	cal->m_num2 = 10;
	cout << cal->getResult() << endl;
	delete cal;

	cal = new SubCalculator;  
	cal->m_num1 = 10;
	cal->m_num2 = 10;
	cout << cal->getResult() << endl;
	delete cal;
}

int main() {
	test();
	system("pause");
	return 0;
}