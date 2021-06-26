#include<iostream>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
double division(double a, double b);

void main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;

	cout << "Введите два числа: "; cin >> a >> b;

	int c = add(a, b);
	cout << "Результат сложения: " << c << endl;
	cout << "Результат вычитания: " << sub(a, b) << endl;
	cout << "Результат умножения: " << mul(a, b) << endl;
	cout << "Результат деления: " << division(a, b) << endl;

}

int add(int a, int b)
{
	int c = a + b;
	return c;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

double division(double a, double b)
{
	return a / b;
}