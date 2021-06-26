#include<iostream>
using namespace std;

#define ARITHMETICAL_OPERATORS

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined ARITHMETICAL_OPERATORS
	//Unary: +, -;
	//Binary: +, -, *, /, %

	int a = 17;
	int b = 5;
	cout << "Результат:  " << a / b << endl;
	cout << "Остаток:  " << a % b << endl;
	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;
	cout << (!true == false) << endl;
#endif
}