#include<iostream>
#include <conio.h> 
using namespace std;
#define tab "\t"
#define Escape 27
#define Spece 32
#define Enter 13

#define up_arrow 72
#define down_arrow 80
#define left_arrow 75
#define right_arrow 77
void main()
{
	
	setlocale(LC_ALL, "Russian");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << tab << key << endl;
		//while (key!= Escape);
		switch (key)
		{
		case up_arrow:
		case 'w':
		case 'W':cout << "Вперед" << endl; break;
		case down_arrow:
		case 's':
		case 'S':cout << "Вперед" << endl; break;
		case left_arrow:
		case 'a':
		case 'A':cout << "Вперед" << endl; break;
		case right_arrow:
		case 'd':
		case 'D':cout << "Вперед" << endl; break;
		case Spece:cout << "Прыжок" << endl; break;
		case Enter:cout << "Огонь" << endl; break;
		case -32:break;//убирает ошибку при нажатии на стрелку
		default:cout << "Error" << endl;
		}
	} while (key != Escape);
}