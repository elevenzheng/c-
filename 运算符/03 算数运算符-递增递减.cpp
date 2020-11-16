#include <iostream>
using namespace std;

int main() {
	//Ç°ÖÃµİÔö
	int a = 10;
	int b = ++a * 10;
	cout << a << "\t" << b << endl;
	//ºóÖÃµİÔö
	int c = 10;
	int d = c++ * 10;
	cout << c << "\t" << d << endl;

	//Ç°ÖÃµİ¼õ
	int e = 11;
	int f = --e * 10;
	cout << e << f << endl;
	//ºóÖÃµİ¼õ
	int g = 11;
	int h = g-- * 10;
	cout << g << h << endl;
	system("pause");
	return 0;
}