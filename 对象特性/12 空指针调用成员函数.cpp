#include <iostream>
using namespace std;

class Person {
public:
	int m_age;
	void showInfo() {
		cout << "aaaa" << endl;
	}
	void showAge() {
		if (this == NULL) {
			return;
		}
		cout << "age=" << this->m_age << endl;
	}
};

void test01() {
	Person* p = NULL;
	p->showAge();
	p->showInfo(); //��ָ����Է��ʳ�Ա���������ǲ����漰��Ա������Ϊ���г�Ա��������this������this==Null������������
}



int main() {
	test01();
	system("pause");
	return 0;
}