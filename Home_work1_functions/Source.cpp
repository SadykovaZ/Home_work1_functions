#include<iostream>

using namespace std;

bool positive(int a)
{
	if (a >= 0)
		return true;
	else
		return false;
}

int sum(int a, int b)
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int deduct(int a, int b)
{
	return a - b;
}

double divide(int a, int b)
{
	return (double)a / b;
}

void function(int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}

}

long long int factorial(int a)
{
	if (a < 0)
		return 0;
	if (a == 0)
		return 1;
	else
		return a*factorial(a - 1);
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int n = 0;
start:
	cout << "Введите номер задания: ";
	cin >> n;

	if (n == 1)
	{
		cout << "1.Написать функцию, которая возвращает истину, если передаваемое значение положительное и ложь, если отрицательное." << endl;

		int a;
		cout << "Введите значение а = ";
		cin >> a;

		cout << positive(a) << endl;
	}

	else if (n == 2)
	{
		cout << "2.Написать функцию, которая в зависимости от выбора пользователя вызывает функции сложения, произведения, вычитания, деления двух чисел (эти функции тоже нужно написать самостоятельно)." << endl;

		int a = 0, b = 0, c = 0;

		cout << "Введите число a = ";
		cin >> a;
		cout << "Введите число b = ";
		cin >> b;
		cout << "Выберите действие:" << endl << "1 - Сложение," << endl << "2 - Произведение," << endl << "3 - Вычитание," << endl << "4 - Деление." << endl;
		cin >> c;

		switch (c)
		{
		case 1: cout << "Сумма a + b = " << sum(a, b) << endl;
			break;
		case 2:cout << "Произведение a * b = " << multiply(a, b) << endl;
			break;
		case 3:cout << "Разность a - b = " << deduct(a, b) << endl;
			break;
		case 4:cout << "Деление a / b = " << divide(a, b) << endl;
			break;
		}

	}

	else if (n == 3)
	{
		cout << "3.Написать функцию, выводящую на экран прямоугольник с высотой N и шириной K." << endl;

		int a, b;

		cout << "Введите высоту прямоугольника: ";
		cin >> a;
		cout << "Введите ширину прямоугольника: ";
		cin >> b;
		function(a, b);
	}

	else if (n == 4)
	{
		cout << "4.Написать функцию, вычисляющую факториал переданного ей числа." << endl;
		int a = 0;
		cout << "Введите значение а = ";
		cin >> a;

		cout << "Факториал числа а = " << factorial(a) << endl;
	}

	goto start;
	system("pause");
	return 0;
}