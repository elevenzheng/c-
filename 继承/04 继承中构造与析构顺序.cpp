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
	Son():Base(10) { //Ĭ�ϵ��õ��Ǹ�����޲ι��캯���������Ҫ���ø�����вι��죬��Ҫ��������������
		cout << "son wu" << endl;
	}
	~Son()
	{
		cout << "son xi" << endl;
	}
};

void test() {
	Son s1; //�����������ʱ���ȴ�����������ٴ��������������ʱ�෴
}

int main() {
	test();
	system("pause");
	return 0;
}