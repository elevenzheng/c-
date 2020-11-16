#include <iostream>
using namespace std;

class C1 {
	int m_a;
};

struct C2 {
	int m_a;
};

int main() {
	C1 c1;
	//c1.m_a = 100; 类中默认的权限是private
	C2 c2;
	c2.m_a = 100; //struct中默认的权限是public
	system("pause");
	return 0;
}