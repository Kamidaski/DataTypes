#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ���-�� ��������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << tab;
	}
	cout << endl;
}