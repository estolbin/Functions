#include<iostream>
using namespace std;

#define tab "\t"

#define INT_ARRAY
#define DOUBLE_ARRAY
#define FLOAT_ARRAY
#define CHAR_ARRAY
#define SHORT_ARRAY

int g_a; // Глобальная переменная. 

const int ROWS = 5;
const int COLS = 8;


// перегрузка FillRand
template<typename T> void FillRand(T arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(short arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> void Print(T arr[], const int n);
template<typename T> void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> void PrintReverse(T arr[], const int n);

template<typename T> T Sum(T arr[], const int n);

template<typename T> double Avg(T arr[], const int n);

template<typename T> T minValueIn(T arr[], const int n);

template<typename T> T maxValueIn(T arr[], const int n);

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
//-----------------------------------------------------------------------
template<typename T> void FillRand(T arr[], const int n)
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
		arr[i] = double(rand() % 100) / 10;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = 'a' + rand()%26;
	}
}
void FillRand(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

//---------------------------------------------------------------------
template<typename T> void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

template<typename T> void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
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

//---------------------------------------------------------------------
template<typename T> void PrintReverse(T arr[], const int n)
{
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

//---------------------------------------------------------------------
template<typename T> T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

//---------------------------------------------------------------------
template<typename T> double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

//---------------------------------------------------------------------
template<typename T> T minValueIn(T arr[], const int n) 
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

//---------------------------------------------------------------------
template<typename T> T maxValueIn(T arr[], const int n) 
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;

}
//---------------------------------------------------------------------