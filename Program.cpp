//файл program.cpp
#include <iostream>
#include "Funcs.h"

using namespace std;

int main() {
	double arg1 = 0, arg2 = 0;
	int funcnumb = 0;
	setlocale(LC_ALL, "RUS");
	cout << "Первое число:";
	cin >> arg1;
	cout << "Второе число:";
	cin >> arg2;
	do
	{
		system("cls");
		cout << "Введите номер желаемой операции:" << endl;
		cout << "1 - сложение" << endl;
		cout << "2 - деление" << endl;
		cout << "3 - вычитание" << endl;
		cout << "4 - умножение" << endl;
		cin >> funcnumb;
		if ((funcnumb == 1) || (funcnumb == 2) || (funcnumb == 3) || (funcnumb == 4))
		{
			break;
		}
	} while (true);

	system("cls");

	switch (funcnumb)
	{
	case 1:
	{
		std::cout << num1 <<" + " << num2 << " = " << sum(num1, num2) << endl;
		system("pause");
		break;
	}

	case 2:
	{
		std::cout << num1 << " / " << num2 << " = " << div(num1, num2) << endl;
		system("pause");
		break;
	}

	case 3:
	{
		std::cout << num1 << " - " << num2 << " = " << dif(num1, num2) << endl;
		system("pause");
		break;
	}

	case 4:
	{
		std::cout << num1 << " * " << num2 << " = " << mul(num1, num2) << endl;
		system("pause");
		break;
	}
	default:
		break;
	}

	return 0;
}