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
		cout << "2 - вычитание" << endl;
		cout << "3 - умножение" << endl;
		cout << "4 - деление" << endl;
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
		cout << "Данная функция находится в разработке" << endl;
		break;
	}

	case 2:
	{
		cout << "Данная функция находится в разработке" << endl;
		break;
	}

	case 3:
	{
		cout << "Данная функция находится в разработке" << endl;
		break;
	}

	case 4:
	{
		cout << "Данная функция находится в разработке" << endl;
		break;
	}
	default:
		break;
	}

	return 0;
}