#include <iostream>
using namespace std;

class Person
{
public:
	//���캯��
	/*1.���캯��û�з���ֵ��Ҳû��void
	  2.���캯�������в����������ع�
	  3.���캯����������һ��
	  4.���캯���ڴ���һ������ʱ���Զ�����*/
	Person() {
		cout << "���캯��" << endl;
	};
	//��������
	/*1.��������û�з���ֵ����û��void
	  2.���������ĺ�����������һ�£�����һ��~
	  3.��������û�в����������ع�
	  4.�������������ٶ���ʱ�Զ�����*/
	~Person() {
		cout << "��������" << endl;
	};

};

void test01() {
	Person p;
}

int main() {
	//test01();
	Person p;

	system("pause");
	return 0;
}