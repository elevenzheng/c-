#include <iostream>
using namespace std;

class Base {
public:
	int m_A;
	void display();
	Base(int a);
};
Base::Base(int a) :m_A(a) {}
void Base::display() {
	cout << "Base m_A = " << m_A << endl;
}

class Son1 :virtual public Base {
public:
	int m_B;
	void display();
	Son1(int a,int b);
};
void Son1::display() {
	cout << "Son1 m_A = " << m_A << endl;
	cout << "Son1 m_B = " << m_B << endl;
}
Son1::Son1(int a, int b) :Base(a), m_B(b) {}

class Son2 :virtual public Base {
public:
	int m_C;
	void display();
	Son2(int a, int b);
};
void Son2::display() {
	cout << "Son2 m_A = " << m_A << endl;
	cout << "Son2 m_C = " << m_C << endl;
}
Son2::Son2(int a,int b):Base(a),m_C(b) {}

class GrandSon :public Son1, public Son2 {
public:
	int m_D;
	void display();
	GrandSon(int a, int b, int c, int d);
};
GrandSon::GrandSon(int a, int b, int c, int d) :Base(a), Son1(90, b), Son2(100, c), m_D(d) {}
void GrandSon::display() {
	cout << "GrandSon m_A = " << m_A << endl;
	cout << "GrandSon m_B = " << m_B << endl;
	cout << "GradnSon m_C = " << m_C << endl;
	cout << "GradnSon m_D = " << m_D << endl;
}

void test() {
	GrandSon gd(1,2,3,4);
	gd.display();
	Base b(5);
	b.display();
	b = gd;//向上转型，派生类对象可以直接赋值给基类对象，基类内有的值会被赋值，没有的值会抛弃
	//向下转型的话，存在有值没有办法赋值的情况，会出现错误
	b.display();

	Base& bb = gd;
	bb.display();
}

/*当出现菱形继承时，如果不采用特殊操作，会出现基类的成员重复出现在第三层中，不仅会占用额外空间，还会造成二义性
为了避免这一现象，提出了虚基类的概念
虚基类对于基类本身没有影响，影响的只是基类的派生类即后续派生类
后续派生类中，不但拥有基类成员的成员，而且每一个派生类都拥有的是其指针vbptr，指向一个表vbtable，这个表内容是偏移量
这样在菱形继承中最后一个类中也有一个这样的指针，若值是直接给定的，则按照就近原则
如果是通过构造函数构造，则需要显式调用虚基类的构造函数，其中中间类的构造赋值可随意给定
类的大小由成员和指针一起决定，一个指针也占4位
    在最终派生类的构造函数调用列表中，不管各个构造函数出现的顺序如何，编译器总是先调用虚基类的构造函数，再按照出现的
顺序调用其他的构造函数；而对于普通继承，就是按照构造函数出现的顺序依次调用的*/

/*上述所有的类中Base大小为4，Son1和Son2大小为12，GrandSon大小为24
base中一个int，占4
Son1中，一个vbptr，一个自己的int，一个base的int
GrandSon中，（vbptr+int）*2 + base中的int + 自己的int*/
int main() {
	test();
	system("pause");
	return 0;
}

