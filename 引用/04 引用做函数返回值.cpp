#include <iostream>
using namespace std;

int b = 10;

int& test01() {
	int a = 10;//������ջ��
	return a;
}

int& test02() {
	//static int a = 10;//������ȫ����
	return b;//���صľ��Ƕ�Ӧ���������ã�Ҳ���Ǹñ���
		//����ȫ�ֱ�����ԭ���Ǿֲ���̬������main���޷�����,���ֲ���̬������ֵ����ͨ�����ô���
}

int main() {
	int& val = test01();
	cout << val << endl;
	cout << val << endl;//���ɷ��ؾֲ�����

	int& rel = test02();
	cout << rel << endl;
	cout << "b" << b << endl;
	test02() = 1000;//�������ÿ�����Ϊ��ֵ���Է��صı��������ø�ֵ�����൱��ֱ�Ӷ�ԭ���������޸�
	cout << rel << endl;
	cout << "b" << b << endl;//���Կ�����������������ֵ��ֱ���޸��˱����ĺ���ֵ
	system("pause");
	return 0;
}
