#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistic.h"

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