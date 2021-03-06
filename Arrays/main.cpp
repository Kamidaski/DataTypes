#include<iostream>
using namespace std;

/*
-----------------------------------------------------------
HomeWork:
Написать функции:
??? Input(???);			//Позволяет ввести значения элементов массива с клавиатуры;
??? PrintReverse(???);	//Выводит массив на экран в обратном порядке - от последнего элемента к первому
??? Sum(???);			//Возвращает сумму элементов массива
??? Avg(???);			//Возвращает среднее арифметическое (Avarage) элементов массива
??? minValueIn(???);	//Возвращает минимальное значение из массива
??? maxValueIn(???);	//Возвращает максимальное значение из массива

Все эти функции можно писать прямо здесь, в этом же проекте.
-----------------------------------------------------------

1. Перегрузить функцию FillRand() для двумерных массивов типа int, double, float, char, short;+
2. Перегрузить шаблонные функции Sum(), Avg(), minValueIn(), maxValueIn() для двумерных массивов;+
3. Написать шаблонную функцию Sort(), которая сортирует массив любого типа;
4. Создать ветку templated_split, и в этой ветке вынести шаблонные функции в отдельные файлы;
*/

#define tab "\t"

int g_a;	//Глобальная переменная, ее видят все функции, и ее может изменить любая функция
			//Поэтому их использование не рекомендуется
			//Поскольку не известно что в ней хранится
			//g_ - Global (Hungarian notation - венгерская нотация)
			//НО глобальные константы используются широко, так как изменить её никто не может


const int ROWS = 5;
const int COLS = 8;

//T – имя шаблонного типа
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T Sum(T arr[], const int n);

template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
double Avg(T arr[], const int n);

template<typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T minValueIn(T arr[], const int n);

template<typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T maxValueIn(T arr[], const int n);


void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(short arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);
void Print(short arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void PrintReverse(int arr[], const int n);
void PrintReverse(double arr[], const int n);
void PrintReverse(float arr[], const int n);
void PrintReverse(char arr[], const int n);
void PrintReverse(short arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
char Sum(char arr[], const int n);
short Sum(short arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(float arr[], const int n);
double Avg(char arr[], const int n);
double Avg(short arr[], const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr[], const int n);
char minValueIn(char arr[], const int n);
short minValueIn(short arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float arr[], const int n);
char maxValueIn(char arr[], const int n);
short maxValueIn(short arr[], const int n);

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


void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;
	}
}

void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 100) / 10;
	}
}

void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 100) / 10;
	}
}

void FillRand(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = short(rand() % 100) / 10;
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

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = double(rand() % 100) / 10;
		}
	} 
}

void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = float(rand() % 100) / 10;
		}
	}
}

void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = char(rand() % 100) / 10;
		}
	}
}

void FillRand(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = short(rand() % 100) / 10;
		}
	}
}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
}

void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
}

void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
}

void Print(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
}


void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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


void PrintReverse(int arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void PrintReverse(double arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void PrintReverse(float arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void PrintReverse(char arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void PrintReverse(short arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}


int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

char Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

short Sum(short arr[], const int n)
{
	short sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}


double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(float arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(short arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}


int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

float minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

char minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

short minValueIn(short arr[], const int n)
{
	short min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}


int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

double maxValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

float maxValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

char maxValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

short maxValueIn(short arr[], const int n)
{
	short min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

//Statistics

template<typename T>
T Sum(T arr[], const int n)//возвращаемое значение шаблонного типа
{
	T sum = 0; //Локальная переменная шаблонного типа
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T> //этот
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0; 
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template<typename T> //этот
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / ROWS + COLS;
}

template<typename T>
T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

template<typename T> //этот
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}

	}
	return min;
}

template<typename T>
T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;

}template<typename T> //этот
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}