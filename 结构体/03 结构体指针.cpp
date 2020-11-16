#include <iostream>
using namespace std;
#include <string>

struct Student {
	string name;
	int age;
	int score;
};

int main() {
	Student s = { "a",18,100 };
	Student* p = &s;
	p->age = 50;
	cout << p->name << p->age << p->score << endl;
	system("pause");
	return 0;
}