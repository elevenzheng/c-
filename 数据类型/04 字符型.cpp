#include <iostream>
using namespace std;

int main() {
	//�ַ��ͱ����ĳ�ʼ��
	char ch = 'a';

	//�ַ��ͱ���ռ�õ��ڴ�ռ�
	cout << sizeof(ch) << endl;

	//�ַ��ͱ����ĳ�������
	//char ch2 = 'abcdef';//��������ֻ����һ���ַ�
	//char ch3 = "aaa";//˫���Ű��������ַ����������ַ�

	//�ַ��ͱ���ʹ��ASCII����д洢
	cout << (int)ch << endl; //�ײ��д�ŵĲ������ַ������������Ӧ��ASCII��ֵ
	system("pause");
	return 0;
}