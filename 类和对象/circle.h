#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle {
private:
	Point m_center;//在一个类中，可以让另一个类作为本类的成员
	int m_ridius;
public:
	void setRidius(int r);
	void setCenter(Point center);
	int getRidius();
	Point getCenter();
};