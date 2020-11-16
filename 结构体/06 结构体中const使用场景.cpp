#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

//关于结构体的传递，建议使用地址传递，避免值传递过程中的数据复制
void printStudent(const Student* p) {
	//p->age = 50; 添加const之后，指针所指向的内容不可更改，避免误操作
	cout << p->age << endl;
}

int main() {
	Student s = { "a",10,200 };

	printStudent(&s);
	cout << s.age << endl;
	system("pause");
	return 0;
}