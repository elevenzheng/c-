#include <iostream>
using namespace std;

//����������ǰ���߱����������Ĵ��ڣ��������Դ��ڶ�Σ�����������ֻ����һ��
int max(int a, int b);
//��������������ʱ�����Խ������ľ��嶨��ж��main֮��

int main() {
	int a = 10, b = 20;

	cout << max(a, b) << endl;
	system("pause");
	return 0;
}

int max(int a, int b) {
	return a > b ? a : b;
}