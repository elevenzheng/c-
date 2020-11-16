#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "base wu" << endl;
	}
	Base(int a) {
		cout << "base you" << endl;
	}
	~Base()
	{
		cout << "base xi" << endl;
	}
};

class Son :public Base {
public:
	Son():Base(10) { //默认调用的是父类的无参构造函数，但如果要调用父类的有参构造，需要像这样进行声明
		cout << "son wu" << endl;
	}
	~Son()
	{
		cout << "son xi" << endl;
	}
};

void test() {
	Son s1; //创建子类对象时，先创建父类对象，再创建子类对象，析构时相反
}

int main() {
	test();
	system("pause");
	return 0;
}