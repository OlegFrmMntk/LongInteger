#include <iostream>
#include <string>
#include "LongInteger.h"

using namespace std;

void comp(bool k)
{
	if (k == 1)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
}

void inf()
{
	cout << "\n1 - Сложение двух длинных целых чисел" << endl;
	cout << "2 - Сложение длинного целого с целым" << endl;
	cout << "3 - Вычитание двух длинных целых чисел" << endl;
	cout << "4 - Вычитание из длинного целого целого" << endl;
	cout << "5 - Произведение двух длинных целых чисел" << endl;
	cout << "6 - Произведение длинного целого и целым" << endl;
	cout << "7 - Деление двух длинных целых чисел" << endl;
	cout << "8 - Деление длинного целого на целое" << endl;
	cout << "9 - Сравнение двух длиных целых" << endl;
	cout << "10 - Сравнение длинного целого с целым" << endl;
	cout << "11 - Выход" << endl;
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	LongInteger firstNumber, secondNumber, thirdNumber;
	int temp;

	cout << "Введите первое длинное целое число" << endl;
	cin >> firstNumber;

	cout << "Введите второе длинное целое число" << endl;
	cin >> secondNumber;

	cout << "Введите целое число" << endl;
	cin >> temp;

	cout << "firstNumber = " << firstNumber << endl;
	cout << "secondNumber = " << secondNumber << endl;
	cout << "temp = " << temp << endl;
	
	while (true)
	{	
		int k;
		
		inf();

		cin >> k;

		switch (k)
		{
			case 1:
			{
				cout << "----------------------------------Сложение двух длинных целых чисел---------------------------------" << endl;

				thirdNumber = firstNumber + secondNumber;
				cout << "firstNumber + secondNumber = " << thirdNumber << endl;
				cout << endl;

				break;
			}
			case 2:
			{
				cout << "---------------------------------Сложение длинного целого с целым-----------------------------------" << endl;

				thirdNumber = firstNumber + temp;
				cout << "firstNumber + temp = " << thirdNumber << endl;
				cout << endl;

				break;
			}
			case 3:
			{
				cout << "---------------------------------Вычитание двух длинных целых чисел-----------------------------------" << endl;

				thirdNumber = firstNumber - secondNumber;
				cout << "firstNumber - secondNumber = " << thirdNumber << endl;
				cout << endl;

				break;
			}
			case 4:
			{
				cout << "---------------------------------Вычитание из длинного целого целого-----------------------------------" << endl;
				
				thirdNumber = firstNumber - temp;
				cout << "firstNumber - temp = " << thirdNumber << endl;
				cout << endl;
				
				break;
			}
			case 5:
			{
				cout << "---------------------------------Произведение двух длинных целых чисел-----------------------------------" << endl;
				
				thirdNumber = firstNumber * secondNumber;
				cout << "firstNumber * secondNumber = " << thirdNumber << endl;
				cout << endl;
				
				break;
			}
			case 6:
			{
				cout << "---------------------------------Произведение длинного целого и целым-----------------------------------" << endl;
				
				thirdNumber = firstNumber * temp;
				cout << "firstNumber * temp = " << thirdNumber << endl;
				cout << endl;
				
				break;
			}
			case 7:
			{
				cout << "---------------------------------Деление двух длинных целых чисел-----------------------------------" << endl;
		
				thirdNumber = firstNumber / secondNumber;
				cout << "firstNumber / secondNumber = " << thirdNumber << endl;
				cout << endl;
			
				break;
			}
			case 8:
			{
				cout << "---------------------------------Деление длинного целого на целое-----------------------------------" << endl;
			
				thirdNumber = firstNumber / temp;
				cout << "firstNumber / temp = " << thirdNumber << endl;
				cout << endl;
			
				break;
			}
			case 9:
			{
				cout << "---------------------------------Сравнение двух длиных целых-----------------------------------" << endl;
		
				bool k;
			
				k = firstNumber > secondNumber;
				cout << "firstNumber > secondNumber" << endl;
				comp(k);
			
				k = firstNumber >= secondNumber;
				cout << "firstNumber >= secondNumber" << endl;
				comp(k);
			
				k = firstNumber < secondNumber;
				cout << "firstNumber < secondNumber" << endl;
				comp(k);
			
				k = firstNumber <= secondNumber;
				cout << "firstNumber <= secondNumber" << endl;
				comp(k);
			
				cout << endl;
				break;
			}
			case 10:
			{
				cout << "---------------------------------Сравнение длинного целого с целым-----------------------------------" << endl;
			
				bool k;
			
				k = firstNumber > temp;
				cout << "firstNumber > temp" << endl;
				comp(k);
			
				k = firstNumber >= temp;
				cout << "firstNumber >= temp" << endl;
				comp(k);
			
				k = firstNumber < secondNumber;
				cout << "firstNumber < temp" << endl;
				comp(k);
			
				k = firstNumber <= secondNumber;
				cout << "firstNumber <= temp" << endl;
				comp(k);
			
				cout << endl;
				break;
			}
			case 11:
			{
				return 0;
			}
			default:
				break;
		}
	}

	return 0;
}