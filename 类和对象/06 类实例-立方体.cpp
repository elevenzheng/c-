#include <iostream>
using namespace std;

class Cube {
private:
	int m_L;
	int m_H;
	int m_W;
public:
	void setL(int L) {
		if (L < 0) {
			return;
		}
		m_L = L;
	}
	void setH(int H) {
		if (H < 0) {
			return;
		}
		m_H = H;
	}
	void setW(int W) {
		if (W < 0) {
			return;
		}
		m_W = W;
	}
	int getL() {
		return m_L;
	}
	int getW() {
		return m_W;
	}
	int getH() {
		return m_H;
	}

	int surface() {
		return 2 * (m_L * m_H + m_L * m_W + m_H * m_W);
	}
	int volume() {
		return m_L * m_H * m_W;
	}

	//利用成员函数判断两个长方体是否相等
	bool isEqualByClass(Cube& c) {
		if (m_H == c.getH() && m_L == c.getL() && m_W == c.getW()) {
			return 1;
		}
		else {
			return 0;
		}
	}
};

//利用全局函数判断两个长方体是否相等
bool isEqual(Cube& c1,Cube& c2) {
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW()) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	Cube c1;
	c1.setL(10);
	c1.setH(10);
	c1.setW(10);
	cout << "S" << c1.surface() << endl;
	cout << "V" << c1.volume() << endl;

	Cube c2;
	c2.setL(10);
	c2.setH(10);
	c2.setW(10);

	if (isEqual(c1, c2)) {
		cout << "equal" << endl;
	}
	else {
		cout << "not equal" << endl;
	}

	if (c1.isEqualByClass(c2)) {
		cout << "equal" << endl;
	}
	else {
		cout << "not equal" << endl;
	}

	system("pause");
	return 0;
}