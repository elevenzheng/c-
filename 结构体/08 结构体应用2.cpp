#include <iostream>
using namespace std;
#include <string>

struct Hero {
	string name;
	int age;
	string sex;
};

void bubbleSort(struct Hero* heroArray, int len) {
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (heroArray[i].age > heroArray[j].age) {
				Hero tmp = heroArray[i];
				heroArray[i] = heroArray[j];
				heroArray[j] = tmp;
			}
		}
	}
}

int main() {
	Hero heroArray[5] = {
		{"Áõ±¸",23,"ÄĞ"},
		{"¹ØÓğ",20,"ÄĞ"},
		{"ÕÅ·É",20,"ÄĞ"},
		{"ÕÔÔÆ",21,"ÄĞ"},
		{"õõ²õ",19,"Å®"}
	};
	/*for (int i = 0; i < 5; i++) {
		cout << heroArray[i].age << endl;
	}*/
	bubbleSort(heroArray, 5);
	for (int i = 0; i < 5; i++) {
		cout << heroArray[i].name << heroArray[i].age << endl;
	}
	system("pause");
	return 0;
}