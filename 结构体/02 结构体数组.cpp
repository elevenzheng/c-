#include <iostream>
using namespace std;
#include <string>

struct Student {
	string name;
	int age;
	int score;
};

int main() {
	Student arr[3] = {
		{"a",10,100},
		{"b",20,80}
	};
	arr[2].name = "c";
	arr[2].age = 30;
	arr[2].score = 90;
	for (int i = 0; i < 3; i++) {
		cout << arr[i].name << arr[i].age << arr[i].score << endl;
	}
	system("pause");
	return 0;
}