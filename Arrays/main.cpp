#include<iostream>
using namespace std;

//double, float, char, short.

#define tab "\t"

int g_a;	//Глобальная переменная, ее видят все функции, и ее может изменить любая функция
			//Поэтому их использование не рекомендуется
			//Поскольку не известно что в ней хранится
			//g_ - Global (Hungarian notation - венгерская нотация)
			//НО глобальные константы используются широко, так как изменить её никто не может


const int ROWS = 5;
const int COLS = 8;

template<typename T>//T – имя шаблонного типа
void FillRand(T arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T arr[], const int n);

template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void PrintReverse(T arr[], const int n);

template<typename T>T Sum(T arr[], const int n);

template<typename T>double Avg(T arr[], const int n);

template<typename T>T minValueIn(T arr[], const int n);

template<typename T>T maxValueIn(T arr[], const int n);


void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 3, 5, 8 };
	FillRand(arr, n);
	Print(arr, n);
	PrintReverse(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве:\t" << minValueIn(arr, n);
	cout << "Максимальное значение в массиве:\t" << maxValueIn(arr, n);

	double d_arr[n]; //double array
	FillRand(d_arr, n);
	Print(d_arr, n);
	PrintReverse(d_arr, n);
	cout << "Сумма элементов массива: " << Sum(d_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(d_arr, n) << endl;
	cout << "Минимальное значение в массиве:\t" << minValueIn(d_arr, n);
	cout << "Максимальное значение в массиве:\t" << maxValueIn(arr, n);

	float f_arr[n]; //float array
	FillRand(f_arr, n);
	Print(f_arr, n);
	PrintReverse(f_arr, n);
	cout << "Сумма элементов массива: " << Sum(f_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(f_arr, n) << endl;
	cout << "Минимальное значение в массиве:\t" << minValueIn(f_arr, n);
	cout << "Максимальное значение в массиве:\t" << maxValueIn(arr, n);

	char c_arr[n]; //char array
	FillRand(c_arr, n);
	Print(c_arr, n);
	PrintReverse(c_arr, n);
	cout << "Сумма элементов массива: " << Sum(c_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(c_arr, n) << endl;
	cout << "Минимальное значение в массиве:\t" << minValueIn(c_arr, n);
	cout << "Максимальное значение в массиве:\t" << maxValueIn(arr, n);

	short s_arr[n]; //short array
	FillRand(s_arr, n);
	Print(s_arr, n);
	PrintReverse(s_arr, n);
	cout << "Сумма элементов массива: " << Sum(s_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(s_arr, n) << endl;
	cout << "Минимальное значение в массиве:\t" << minValueIn(s_arr, n);
	cout << "Максимальное значение в массиве:\t" << maxValueIn(arr, n);
	cout << "\n===========================2D arrays ==========================";

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

//double, float, char, short.
template<typename T>
void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
			arr[i] = rand()%100;
	}
}

void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
			arr[i] = double(rand()%100)/10;
	}
}

void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
			arr[i] = float(rand()%100)/10;
	}
}

void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
			arr[i] = char(rand()%100)/10;
	}
}

void FillRand(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
			arr[i] = short(rand()%100)/10;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//Определяет, что делает функция.
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
}

template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

template<typename T>void PrintReverse(T arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

template<typename T>T Sum(T arr[], const int n)//возвращаемое значение шаблонного типа
{
	T sum = 0; //Локальная переменная шаблонного типа
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

template<typename T>T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

template<typename T>T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}