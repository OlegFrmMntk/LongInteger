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

		LongInteger secondNumber;
		cin >> firstNumber >> secondNumber;

	    firstNumber /= secondNumber;

		cout << firstNumber << endl;
	}

	return 0;
}