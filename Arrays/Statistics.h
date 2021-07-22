#pragma once
#include "stdafx.h"


template<typename T> T Sum(T arr[], const int n)
{
	T sum = 0;
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
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
template<typename T> T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

template<typename T> T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		sum += Sum(arr[i], COLS);
	}
	return sum;
}
template<typename T> double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / ROWS * COLS;
}
template<typename T> T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++) 
	{
		T minCols = minValueIn(arr[i], COLS);
		min = minCols < min ? minCols : min;
	}
	return min;
}

template<typename T> T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		T maxCols = maxValueIn(arr[i], COLS);
		max = maxCols > max ? maxCols : max;
	}
	return max;
}

template<typename T> void Sort(T arr[], const int n, int first = 0)
{
	int i = first;
	int j = n - 1;

	int m = (i + j) / 2;
	do
	{
		while (arr[i] < arr[m]) i++;
		while (arr[j] > arr[m]) j--;

		if (i <= j)
		{
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	} while (i <= j);

	if (j > 0) Sort(arr, ++j);
	if (i < n) Sort(arr, n, i);
}
