#include <iostream>
using namespace std;

class Building {
	friend void goodfriend(Building* b);
private:
	string bedroom;
public:
	string livingroom;
	Building() {
		livingroom = "living";
		bedroom = "bed";
	}
};

void goodfriend(Building *b) {
	cout << b->livingroom << endl;
	cout << b->bedroom << endl;
}

int main() {
	Building b;
	goodfriend(&b);
	system("pause");
	return 0;
}