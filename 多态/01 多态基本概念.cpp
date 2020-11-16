#include <iostream>
using namespace std;

class Animal {
public:
	virtual void speak() {
		cout << "animal speak" << endl;
	}
};

class Cat :public Animal {
public:
	void speak() {
		cout << "cat speak" << endl;
	}
};

class Dog :public Animal {
public:
	void speak() {
		cout << "dog speak" << endl;
	}
};

void test() {
	Cat cat;
	Animal& animal = cat;
	animal.speak();

	Dog dog;
	Animal* animal2 = &dog;
	animal2->speak();
}

//��̬��̬���������̳�/������д���ຯ��
//ʹ�ã�ͨ���������û�ָ��ָ���������

int main() {
	test();
	cout << sizeof(Animal) << endl;
	system("pause");
	return 0;
}