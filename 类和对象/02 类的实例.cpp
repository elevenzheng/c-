#include <iostream>
#include <string>
using namespace std;

//设计学生类
class Student {

	//类中的属性和方法都成为成员
	//属性 成员属性/成员变量
	//方法 成员方法/成员函数
private:
	string m_name;
	int m_id;
public:
	void setName(string name) {
		m_name = name;
	}
	void setId(int id) {
		m_id = id;
	}
	void showInfo() {
		cout << m_name << m_id << endl;
	}
};

int main() {
	Student s1; //实例化对象
	s1.setName("aaa");
	s1.setId(100);

	s1.showInfo();
	system("pause");
	return 0;
}