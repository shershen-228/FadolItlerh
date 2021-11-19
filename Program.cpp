//файл program.cpp
#include <iostream>
#include "Funcs.h"

using namespace std;

int main() {
	double arg1 = 0, arg2 = 0;
	int funcnumb = 0;
	setlocale(LC_ALL, "Rus");
	cout << "First number:";
	cin >> arg1;
	cout << "Second number:";
	cin >> arg2;
	do
	{
		system("cls");
		cout << "Enter the number of operation:" << endl;
		cout << "1 - Addition (+)" << endl;
		cout << "2 - Division (/)" << endl;
		cout << "3 - Subtraction (-)" << endl;
		cout << "4 - Multiplication (*)" << endl;
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
		std::cout << arg1 <<" + " << arg2 << " = " << sum(arg1, arg2) << endl;
		system("pause");
		break;
	}

	case 2:
	{
		std::cout << arg1 << " / " << arg2 << " = " << div(arg1, arg2) << endl;
		system("pause");
		break;
	}

	case 3:
	{
		std::cout << arg1 << " - " << arg2 << " = " << dif(arg1, arg2) << endl;
		system("pause");
		break;
	}

	case 4:
	{
		std::cout << arg1 << " * " << arg2 << " = " << mul(arg1, arg2) << endl;
		system("pause");
		break;
	}
	default:
		break;
	}

	return 0;
}