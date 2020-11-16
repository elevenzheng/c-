#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Student {
	string sName;
	int score;
};

struct Teacher {
	string tName;
	struct Student sArray[5];
};

void allocateSpace(struct Teacher* tArray,int len) {
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++) {
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[i];

			int random = rand() % 41 + 60;
			tArray[i].sArray[j].score = random;
		}
	}
}

void printInfo(struct Teacher* tArray, int len) {
	for (int i = 0; i < len; i++) {
		cout << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++) {
			cout << tArray[i].sArray[j].sName << tArray[i].sArray[j].score << endl;
		}
	}
}

int main() {
	srand((unsigned int)time(NULL));
	Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	printInfo(tArray, len);
	system("pause");
	return 0;
}