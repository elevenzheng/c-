#include <iostream>
#include <string>
using namespace std;

//���ѧ����
class Student {

	//���е����Ժͷ�������Ϊ��Ա
	//���� ��Ա����/��Ա����
	//���� ��Ա����/��Ա����
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
	Student s1; //ʵ��������
	s1.setName("aaa");
	s1.setId(100);

	s1.showInfo();
	system("pause");
	return 0;
}