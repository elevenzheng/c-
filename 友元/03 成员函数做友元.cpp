#include <iostream>
#include <string>
using namespace std;

class Building;
class GoodGay {
public:
	GoodGay();
	Building* build;
	void visit();
	void visit2();
};

class Building {
	friend void GoodGay::visit();
private:
	string m_bedroom;
public:
	string m_livingroom;
	Building();
};

Building::Building() {
	m_livingroom = "living";
	m_bedroom = "bed";
}

GoodGay::GoodGay() {
	build = new Building;
}

void GoodGay::visit() {
	cout << build->m_livingroom << endl;
	cout << build->m_bedroom << endl;
}

void GoodGay::visit2() {
	cout << build->m_livingroom << endl;
	//cout << build->m_bedroom << endl;
}

void test() {
	GoodGay gg;
	gg.visit();
}

int main() {
	test();
	system("pause");
	return 0;
}