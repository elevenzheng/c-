#include <iostream>
#include <string>
using namespace std;

class Building {
	friend class GoodGay;
public:
	string m_livingroom;
	Building();
private:
	string m_bedroom;
};

Building::Building() {
	m_livingroom = "living";
	m_bedroom = "bed";
}

class GoodGay {
private:
	Building* build;
public:
	GoodGay();
	void visit();
};

GoodGay::GoodGay() {
	build = new Building;
}

void GoodGay::visit() {
	cout << build->m_livingroom << endl;
	cout << build->m_bedroom << endl;
}

void test() {
	GoodGay good;
	good.visit();
}

int main() {
	test();
	system("pause");
	return 0;
}