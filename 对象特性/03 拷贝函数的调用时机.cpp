#include <iostream>
using namespace std;

class Person {
private:
	int m_Age;
public:
	Person() {
		cout << "无参构造" << endl;
	}
	Person(int age) {
		m_Age = age;
		cout << "有参构造" << endl;
	}
	Person(const Person& p) {
		m_Age = p.m_Age;
		cout << "拷贝构造" << endl;
	}
	~Person()
	{
		cout << "析构函数" << endl;
	}
	int getAge() {
		return m_Age;
	}
};

//拷贝函数调用时机
//通过一个已存在的对象建立一个新的对象
void test01() {
	Person p1(10);
	Person p2(p1);

	cout << "p1" << p1.getAge() << endl;
	cout << "p2" << p2.getAge() << endl;
}
//值传递的方式给函数传参
void doWork(Person p) { // Person p = p 隐式转换

}

void test02() {
	Person p3;
	doWork(p3);
}
//值方式返回局部对象
Person doWork2() {
	Person p(50);
	cout << p.getAge() << endl;
	cout << &p << endl;
	return p;
}

void test03() {
	Person p5 = doWork2();//Person p = p 隐式转换
	cout << p5.getAge() << endl;
	cout << &p5 << endl;
}
//后两种方式必须是值传递的方法，只有值传递才会进行拷贝

void test04() {
	Person p10;
	Person p11(p10);

	cout << &p10 << endl;
	cout << &p11 << endl;
}
int main() {
	//test01();
	//test02();
	//test03();
	test04();
	system("pause");
	return 0;
}