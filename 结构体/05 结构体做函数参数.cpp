#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

void printStudent1(struct Student s) {
	s.age = 100;
	cout << s.name << s.age << s.score << endl;
}

void printStudent2(struct Student* p) {
	p->age = 200;
	cout << p->name << p->age << p->score << endl;
}

int main() {
	Student s = { "a",20,400 };

	printStudent1(s);  //ֵ���ݣ��������޸Ĳ����޸�main������
	printStudent2(&s); //��ַ���ݣ��������޸Ļ��޸�main������
	cout << s.name << s.age << s.score << endl;
	system("pause");
	return 0;
}