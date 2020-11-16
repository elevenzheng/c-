#include <iostream>
using namespace std;

class Person {
private:
	int* m_Age;
public:
	Person(int age) {
		m_Age = new int(age);
	}
	~Person()
	{
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}
	int getAge(){
		return *m_Age;
	}
	Person& operator=(Person& p) {
		//if (this->m_Age != NULL) { //清除本身存在的堆块
		//	delete m_Age;
		//	m_Age = NULL;
		//}
		//this->m_Age = new int(p.getAge());
		*this->m_Age = p.getAge();
		return *this;
	}
};

void test01() {
	Person p1(18);
	Person p2(20);
	Person p3(30);
	
	p2 = p1 = p3;

	cout << p1.getAge() << endl;
	cout << p2.getAge() << endl;
	cout << p3.getAge() << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}