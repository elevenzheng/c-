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
	b = gd;//����ת�ͣ�������������ֱ�Ӹ�ֵ��������󣬻������е�ֵ�ᱻ��ֵ��û�е�ֵ������
	//����ת�͵Ļ���������ֵû�а취��ֵ�����������ִ���
	b.display();

	Base& bb = gd;
	bb.display();
}

/*���������μ̳�ʱ������������������������ֻ���ĳ�Ա�ظ������ڵ������У�������ռ�ö���ռ䣬������ɶ�����
Ϊ�˱�����һ��������������ĸ���
�������ڻ��౾��û��Ӱ�죬Ӱ���ֻ�ǻ���������༴����������
�����������У�����ӵ�л����Ա�ĳ�Ա������ÿһ�������඼ӵ�е�����ָ��vbptr��ָ��һ����vbtable�������������ƫ����
���������μ̳������һ������Ҳ��һ��������ָ�룬��ֵ��ֱ�Ӹ����ģ����վͽ�ԭ��
�����ͨ�����캯�����죬����Ҫ��ʽ���������Ĺ��캯���������м���Ĺ��츳ֵ���������
��Ĵ�С�ɳ�Ա��ָ��һ�������һ��ָ��Ҳռ4λ
    ������������Ĺ��캯�������б��У����ܸ������캯�����ֵ�˳����Σ������������ȵ��������Ĺ��캯�����ٰ��ճ��ֵ�
˳����������Ĺ��캯������������ͨ�̳У����ǰ��չ��캯�����ֵ�˳�����ε��õ�*/

/*�������е�����Base��СΪ4��Son1��Son2��СΪ12��GrandSon��СΪ24
base��һ��int��ռ4
Son1�У�һ��vbptr��һ���Լ���int��һ��base��int
GrandSon�У���vbptr+int��*2 + base�е�int + �Լ���int*/
int main() {
	test();
	system("pause");
	return 0;
}

