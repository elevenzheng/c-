#include <iostream>
#include <string>
using namespace std;

//���ַ���Ȩ��
//public�����ڿ��Է��ʣ�����Ҳ���Է���
//protected�����ڿ��Է��ʣ����ⲻ���Է��ʣ���������Է��ʸ����protected��Ա
//private�����ڿ��Է��ʣ����ⲻ���Է��ʣ����಻���Է��ʸ����protected��Ա

class Person
{
public:
	string m_name;
protected:
	string m_book;
private:
	int m_password;
public:
	void func() { //���ھ��ɷ���
		m_name = "a";
		m_book = "b";
		m_password = 1;
	}
};

int main() {
	Person p;
	p.m_name = "p";
	p.func(); //����ֻ���Է���public��Ա
	//p.m_password = 2; ˽�г�Ա�ͱ�����Ա���ⲻ�ɷ���
	system("pause");
	return 0;
}