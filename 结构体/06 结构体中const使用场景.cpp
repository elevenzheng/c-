#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

//���ڽṹ��Ĵ��ݣ�����ʹ�õ�ַ���ݣ�����ֵ���ݹ����е����ݸ���
void printStudent(const Student* p) {
	//p->age = 50; ���const֮��ָ����ָ������ݲ��ɸ��ģ����������
	cout << p->age << endl;
}

int main() {
	Student s = { "a",10,200 };

	printStudent(&s);
	cout << s.age << endl;
	system("pause");
	return 0;
}