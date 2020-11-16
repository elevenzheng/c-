#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	Animal() {
		cout << "animal gou" << endl;
	}
	virtual void func() = 0;
	virtual ~Animal() //ÐéÎö¹¹º¯Êý
	{
		cout << "animal xi" << endl;
	}
};

class Cat :public Animal {
public:
	string* m_name;
	void func() {
		cout << "cat" << endl;
	}
	Cat(string name) {
		m_name = new string(name);
		cout << "cat gou" << endl;
	}
	~Cat()
	{
		cout << "cat xi" << endl;
	}
};

void test() {
	Animal* animal = new Cat("tom");
	animal->func();
	delete animal;
}

int main() {
	test();
	system("pause");
	return 0;
}