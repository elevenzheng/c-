#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle {
private:
	Point m_center;//��һ�����У���������һ������Ϊ����ĳ�Ա
	int m_ridius;
public:
	void setRidius(int r);
	void setCenter(Point center);
	int getRidius();
	Point getCenter();
};