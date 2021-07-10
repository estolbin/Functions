#include "stdafx.h"
#include "FillRand.h"
#include "Print.h"
#include "Statistics.h"


#define ARRAY_1
#define ARRAY_2

int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
#ifdef INT_ARRAY
	cout << tab << "Массив с типом int"	<< endl << endl;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	PrintReverse(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: "<< tab << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << tab << maxValueIn(arr, n) << endl;
#endif

#ifdef DOUBLE_ARRAY
	cout << endl << tab << "Массив с типом double"	<< endl << endl;

	double d_arr[n];
	FillRand(d_arr, n);
	Print(d_arr, n);
	PrintReverse(d_arr, n);
	cout << "Сумма элементов массива: " << Sum(d_arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(d_arr, n) << endl;
#endif	

#ifdef FLOAT_ARRAY
	cout << endl << tab << "Массив с типом float"	<< endl << endl;

	float f_arr[n];
	FillRand(f_arr, n);
	Print(f_arr, n);
	PrintReverse(f_arr, n);
	cout << "Сумма элементов массива: " << Sum(f_arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(f_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(f_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(f_arr, n) << endl;	
#endif

#ifdef CHAR_ARRAY	
	cout << endl << tab << "Массив с типом char"	<< endl << endl;

	char c_arr[n];
	FillRand(c_arr, n);
	Print(c_arr, n);
	PrintReverse(c_arr, n);
	cout << "Сумма элементов массива: " << Sum(c_arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(c_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(c_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(c_arr, n) << endl;
#endif

#ifdef SHORT_ARRAY
	cout << endl << tab << "Массив с типом short"	<< endl << endl;

	short s_arr[n];
	FillRand(s_arr, n);
	Print(s_arr, n);
	PrintReverse(s_arr, n);
	cout << "Сумма элементов массива: " << Sum(s_arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(s_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(s_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(s_arr, n) << endl;
#endif

	cout << "\n============= 2D ===========\n";
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);



	return 0;
}
