#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{

					(i + k) % 2 == 0 ? cout << "* " : cout << "  ";
				}
			}
			cout << endl;
		}
	}
}