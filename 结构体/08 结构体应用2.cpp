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
		{"����",23,"��"},
		{"����",20,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
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