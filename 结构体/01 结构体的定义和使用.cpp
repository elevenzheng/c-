#include <iostream>
using namespace std;
#include <string>

struct Student {
	string name;
	int age;
	int score;
}s3;

int main() {
	//ֱ�Ӵ����ṹ�壬�ٷֱ�ֵ
	Student s1;
	s1.name = "a";
	s1.age = 19;
	s1.score = 100;
	cout << s1.name << s1.age << s1.score << endl;

	//����ʱֱ�Ӹ�ֵ
	Student s2 = { "b",20,80 };
	cout << s2.name << s2.age << s2.score << endl;

	//����ʱֱ�Ӵ����ṹ��
	s3.name = "c";
	s3.age = 19;
	s3.score = 200;
	cout << s3.name << s3.age << s3.score << endl;

	system("pause");
	return 0;
}