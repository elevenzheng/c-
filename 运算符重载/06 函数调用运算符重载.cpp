#include <iostream>
#include <string>
using namespace std;

class MyPrint {
public:
	void operator()(string test) {
		cout << test << endl;
	}
};

void test01() {
	MyPrint myprint;
	myprint("hello");
}

class MyAdd {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};

void test02() {
	MyAdd myadd;
	int ret = myadd(1, 9); //��ʹ�ýṹ�뺯�����ƣ��ʳƷº���
	cout << ret << endl;

	cout << MyAdd()(10, 10) << endl; //ͨ��ʹ����������ʵ�ֶ��ڷº����ĵ���
}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}