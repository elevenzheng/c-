#include <iostream>
using namespace std;

int main() {
	//����ָ��
	int a = 10;
	//ָ�붨��ķ�������������* ָ������� = & ����
	int* p = &a;
	cout << "a�ĵ�ַΪ" << &a << endl;
	cout << "ָ��pΪ" << p << endl;

	//ʹ��ָ��
	//ͨ�������õķ�ʽ���ҵ�ָ����ָ���ڴ������
	*p = 1000;
	cout << "a=" << a << endl;
	cout << *p << endl;
	system("pause");
	return 0;
}