#include <iostream>
using namespace std;
#define PI 3.14;

//类：把一个事务的属性和行为封装在一起
class Circle {
	//访问权限
public:
	//属性
	int m_r;
	//行为
	double calculate() {
		return m_r * 2 * PI;
	}
};

int main() {
	Circle c1;
	c1.m_r = 10;
	cout << c1.calculate() << endl;
	system("pause");
	return 0;
}