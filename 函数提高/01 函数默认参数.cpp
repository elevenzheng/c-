#include <iostream>
using namespace std;

//��������ĳ�ʼ��ʱ��Ĭ�ϲ�������������ң���һ����Ĭ�ϲ������β��𣬺�����Ӧ����Ĭ�ϲ���
int func01(int a ,int b = 10,int c = 20) {
	return a + b + c;
}

//����ں���������ʱ��͸����˺�����Ĭ�ϲ�������Ӧ���ں���ʵ�ֵ�ʱ���ٴθ���Ĭ�ϲ���������������βε�����
//������ʵ��ֻ����һ����Ĭ�ϲ���
int func02(int a = 10, int b = 20);

int func02(int a, int b) {
	return a + b;
}

int main() {
	cout << func01(100) << endl;
	cout << func01(100, 50) << endl;

	cout << func02() << endl;
	system("pause");
	return 0;
}