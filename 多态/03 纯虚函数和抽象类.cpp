#include <iostream>
using namespace std;

class Base {//���ڴ��麯�������Ϊ������
public:
	virtual void func() = 0; //���麯��
};


//������������ص㣺�����಻����ʵ����/����������������д�������е��麯��
class Son :public Base {
public:
	void func() {
		cout << "Son func" << endl;
	}
};

void test() {
	//Base b;//�����಻����ʵ����
	Base* b = new Son;
	b->func();
}

int main() {
	test();
	system("pause");
	return 0;
}