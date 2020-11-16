#include <iostream>
using namespace std;


//属性设置成私有：1.自主的给定每一个属性的读写权限 2.对于set过程可以检测属性的有效性
class Person {
private:
	string m_name;//读写
	int m_age = 0;//读写
	string m_book;//写
public:
	void setName(string name) {
		m_name = name;
	}
	void setAge(int age) {
		if (age < 0 || age>150) {//属性的有效性检验
			cout << "age error" << endl;
			return;
		}
		m_age = age;
	}
	void setBook(string book) {
		m_book = book;
	}
	string getName() {
		return m_name;
	}
	int getAge() {
		return m_age;
	}
};

int main() {
	Person p;
	p.setName("a");
	p.setAge(10);
	p.setBook("bbb");

	cout << p.getName() << endl;
	cout << p.getAge() << endl;//对于class中的所有属性的访问必须通过class中存在的接口，不能通过其他方式访问
	system("pause");
	return 0;
}