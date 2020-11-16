#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

struct Teacher {
	int id;
	string name;
	int age;
	Student s;
};

int main() {
	Teacher t;
	t.id = 100;
	t.age = 50;
	t.name = "a";
	Student s = { "c",5,40 };
	t.s = s;
	cout << t.s.name << t.s.age << t.s.score << endl;
	Teacher* p = &t;
	cout << p->s.name << endl;
	system("pause");
	return 0;
}