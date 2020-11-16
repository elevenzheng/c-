#include "circle.h"

void Circle::setRidius(int r) {
	m_ridius = r;
}
void Circle::setCenter(Point center) {
	m_center = center;
}
int Circle::getRidius() {
	return m_ridius;
}
Point Circle::getCenter() {
	return m_center;
}
