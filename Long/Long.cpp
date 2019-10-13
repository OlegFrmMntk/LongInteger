#include <iostream>
#include <string>
#include "LongInteger.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	while (true)
	{
		LongInteger firstNumber;
		int secondNumber;

		cin >> firstNumber >> secondNumber;

		LongInteger third = firstNumber / secondNumber;

		cout << third << endl;
	}

	return 0;
}