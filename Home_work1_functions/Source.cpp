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
	cout << "������� ����� �������: ";
	cin >> n;

	if (n == 1)
	{
		cout << "1.�������� �������, ������� ���������� ������, ���� ������������ �������� ������������� � ����, ���� �������������." << endl;

		int a;
		cout << "������� �������� � = ";
		cin >> a;

		cout << positive(a) << endl;
	}

	else if (n == 2)
	{
		cout << "2.�������� �������, ������� � ����������� �� ������ ������������ �������� ������� ��������, ������������, ���������, ������� ���� ����� (��� ������� ���� ����� �������� ��������������)." << endl;

		int a = 0, b = 0, c = 0;

		cout << "������� ����� a = ";
		cin >> a;
		cout << "������� ����� b = ";
		cin >> b;
		cout << "�������� ��������:" << endl << "1 - ��������," << endl << "2 - ������������," << endl << "3 - ���������," << endl << "4 - �������." << endl;
		cin >> c;

		switch (c)
		{
		case 1: cout << "����� a + b = " << sum(a, b) << endl;
			break;
		case 2:cout << "������������ a * b = " << multiply(a, b) << endl;
			break;
		case 3:cout << "�������� a - b = " << deduct(a, b) << endl;
			break;
		case 4:cout << "������� a / b = " << divide(a, b) << endl;
			break;
		}

	}

	else if (n == 3)
	{
		cout << "3.�������� �������, ��������� �� ����� ������������� � ������� N � ������� K." << endl;

		int a, b;

		cout << "������� ������ ��������������: ";
		cin >> a;
		cout << "������� ������ ��������������: ";
		cin >> b;
		function(a, b);
	}

	else if (n == 4)
	{
		cout << "4.�������� �������, ����������� ��������� ����������� �� �����." << endl;
		int a = 0;
		cout << "������� �������� � = ";
		cin >> a;

		cout << "��������� ����� � = " << factorial(a) << endl;
	}

	goto start;
	system("pause");
	return 0;
}