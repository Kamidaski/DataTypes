#include<iostream>
using namespace std;
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMBUS
#define CHESS_1

#define VERT_LINE (char)179
#define HORIZ_LINE (char)196
#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOVER_LEFT_ANGLE (char)192
#define LOVER_RIGHT_ANGLE (char)217
#define WHITE_BOX (char)219

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)
			{
				cout << "* ";
			}
			cout << endl;
		}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < i; j++)cout << "  ";
			for (int j = 0; j < n; j++)cout << "* ";
			cout << endl;
		}
#endif // TRIANGLE_3
#ifdef TRIANGLE_4
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)cout << "  ";
			cout << "/";
			for (int j = 0; j < i; j++)cout << "    ";
			cout << "\\";
			cout << endl;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)cout << "  ";
			cout << "\\";
			for (int j = i; j < n - 1; j++)cout << "    ";
			cout << "/";
			cout << endl;
		}
#endif // TRIANGLE_4
#ifdef ROMBUS
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)cout << "  ";
			cout << "/";
			for (int j = 0; j < i; j++)cout << "    ";
			cout << "\\";
			cout << endl;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)cout << "  ";
			cout << "\\";
			for (int j = i; j < n - 1; j++)cout << "    ";
			cout << "/";
			cout << endl;
		}
#endif // ROMBUS

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
			if ((i + j) % 2 == 0)
			{
				cout << "+ ";
			}
			else
			{
				cout << "- ";
			}
			(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}
#ifdef CHESS_1
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			//cout << "* ";
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == n && j == 0)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOVER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOVER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZ_LINE << HORIZ_LINE;
			else if (j == 0 || j == n)cout << VERT_LINE;
			else
			{
				if ((i + j) % 2 == 0)cout << WHITE_BOX << WHITE_BOX;
				else cout << "  ";
			}
		}
		cout << endl;
	}

#endif CHESS_1
}