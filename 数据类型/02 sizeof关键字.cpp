#include <iostream>
using namespace std;

int main() {
	//����sizeof�����������ռ�õ��ڴ��С
	//sizeof(��������/��������) ���ڱ����ڶ���ʱ�Ѿ��������������ͣ�����Ҳ����ʵ��ͬ���Ĺ���
	//short < int <= long <= long long
	short num1 = 10;
	cout << "shortռ�õ��ڴ�ռ�Ϊ" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "intռ�õ��ڴ�ռ�Ϊ" << sizeof(int) << endl;
	cout << "longռ�õ��ڴ�ռ�Ϊ" << sizeof(long) << endl;
	cout << "long longռ�õ��ڴ�ռ�Ϊ" << sizeof(long long) << endl;
	system("pause");
	return 0;
}