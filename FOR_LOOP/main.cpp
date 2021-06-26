#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите число для вычесления факториала: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f = f * i;
		cout << f << endl;
	}
	cout << endl;
}