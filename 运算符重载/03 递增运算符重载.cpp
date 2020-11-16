#include <iostream>
using namespace std;

class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger myint);
private:
	int m_num;
public:
	MyInteger() {
		m_num = 0;
		cout << "w" << endl;
	}
	MyInteger(const MyInteger& mint) {
		m_num = mint.m_num;
		cout << "kb" << endl;
	}
	~MyInteger()
	{
		cout << "xi";
	}
	MyInteger& operator++() {//ǰ��++������������Ϊ�˶�ͬһ�����ݲ�����ǰ��++������ʽ����
		++m_num;
		return *this;
	}
	MyInteger operator++(int) {//����++,int��ռλ��
		MyInteger tmp = *this;
		m_num++;
		return tmp;
	}
};

ostream& operator<<(ostream& cout, MyInteger myint) { //ע�⣬����ĵڶ��������������ã���Ϊ�ں���++����ʱ��ֻ�ܷ��ؾֲ�����(����),
													//��Ϊ���ܷ��ʾֲ�����������
	cout << myint.m_num << endl;
	return cout;
}

void test01() {
	MyInteger myint;
	cout << ++myint << endl;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02() {
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}