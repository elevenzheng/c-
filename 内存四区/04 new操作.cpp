#include <iostream>
using namespace std;

int* func() {
	int* p = new int(10);
	return p;
}

void test01() {
	int* m = func();
	cout << *m << endl;
	cout << *m << endl;

	delete m;
	//cout << *m << endl; ��ʱm�ڶ��ϵĿռ��Ѿ����ͷţ����ɷ���
}

void test02() {
	int* arr = new int[10];
	for (int i = 0; i < 10; i++){
		arr[i] = 100 + i;
	}
	for (int i = 0; i < 10; i++){
		cout << arr[i] << endl;
	}
}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}