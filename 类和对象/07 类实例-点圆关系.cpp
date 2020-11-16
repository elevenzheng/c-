#include <iostream>
using namespace std;
#include "circle.h"
#include "point.h"

void isInCircle(Circle& c, Point& p) {
	int d1 = (c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int d2 = c.getRidius() * c.getRidius();
	if (d1 > d2) {
		cout << "out" << endl;
	}
	else if (d1 == d2) {
		cout << "on" << endl;
	}
	else {
		cout << "in" << endl;
	}
}

int main() {
	Point center;
	center.setX(10);
	center.setY(0);

	Circle c;
	c.setCenter(center);
	c.setRidius(10);

	Point p1;
	p1.setX(10);
	p1.setY(10);

	Point p2;
	p2.setX(10);
	p2.setY(9);
	
	Point p3;
	p3.setX(10);
	p3.setY(11);

	isInCircle(c, p1);
	isInCircle(c, p2);
	isInCircle(c, p3);

	system("pause");
	return 0;
}