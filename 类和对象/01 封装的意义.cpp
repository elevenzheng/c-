#include <iostream>
using namespace std;
#define PI 3.14;

//�ࣺ��һ����������Ժ���Ϊ��װ��һ��
class Circle {
	//����Ȩ��
public:
	//����
	int m_r;
	//��Ϊ
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