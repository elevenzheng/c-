#include <iostream>
using namespace std;

void showValue(const int& val) {
	//val++; �������Ϊ�˱��⣬���βμ�һ��const
	cout << "val=" << val << endl;
}

int main() {
	//int a = 10;
	//int& ref = a;

	//int* p = new int(10);
	//int& val = *p;// int* const val = &(*p)
	//cout << val << endl;
	//val = 20;
	//cout << *p;   ���ÿ���ָ�����������

	//��������
	const int& ref = 10;//�൱��int tmp = 10; const int& ref = tmp;
	//ref = 20; ���ɹ� �൱�� const int* const ref = &tmp   �������޸�ָ��Ҳ�������޸�ֵ

	//ʹ�ó��������������βΣ���ֹ�����
		//�˴���˼����ṹ���βμ�constһ��
	int a = 100;
	showValue(a);

	cout << "a=" << a << endl;
	system("pause");
	return 0;
}