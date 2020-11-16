#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "无参构造" << endl;
	}
	Person(int age,int height) {
		m_age = age;
		m_height = new int(height);
		cout << "有参构造" << endl;
	}
	Person(const Person& p) {
		cout << "拷贝构造函数" << endl;
		m_age = p.m_age;
		//m_height = p.m_height; 这行就是编译器默认拷贝构造函数的内容，会造成浅拷贝，释放时会重复释放同一区域内容
		m_height = new int(*p.m_height);//深拷贝
	}
	~Person()
	{
		//当出现使用堆上的内存区间的情况时，需要给出析构函数进行堆上内存释放，此时应该自定义拷贝构造函数，避免浅拷贝带来的问题
		if (m_height != NULL) {
			delete m_height;
			m_height == NULL;
		}
		cout << "析构函数" << endl;
	}

	int m_age = 0;
	int* m_height = NULL;
};

void test01() {
	Person p1(18, 150);
	Person p2(p1);
	cout << p1.m_age << *p1.m_height << endl;
	cout << p2.m_age << *p2.m_height << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}