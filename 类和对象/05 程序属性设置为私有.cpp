#include <iostream>
using namespace std;


//�������ó�˽�У�1.�����ĸ���ÿһ�����ԵĶ�дȨ�� 2.����set���̿��Լ�����Ե���Ч��
class Person {
private:
	string m_name;//��д
	int m_age = 0;//��д
	string m_book;//д
public:
	void setName(string name) {
		m_name = name;
	}
	void setAge(int age) {
		if (age < 0 || age>150) {//���Ե���Ч�Լ���
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
	cout << p.getAge() << endl;//����class�е��������Եķ��ʱ���ͨ��class�д��ڵĽӿڣ�����ͨ��������ʽ����
	system("pause");
	return 0;
}