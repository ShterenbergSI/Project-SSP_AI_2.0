// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int i = 0; // инициализируем счетчик цикла.
	int sum = 0; // инициализируем счетчик суммы.
	while (i < 1000)
	{
		i++;
		sum += i;
	}
	cout << "Сумма чисел от 1 до 1000 = " << sum << endl;
	return 0;
}
