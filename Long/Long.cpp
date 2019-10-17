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
	cout << "\n1 - �������� ���� ������� ����� �����" << endl;
	cout << "2 - �������� �������� ������ � �����" << endl;
	cout << "3 - ��������� ���� ������� ����� �����" << endl;
	cout << "4 - ��������� �� �������� ������ ������" << endl;
	cout << "5 - ������������ ���� ������� ����� �����" << endl;
	cout << "6 - ������������ �������� ������ � �����" << endl;
	cout << "7 - ������� ���� ������� ����� �����" << endl;
	cout << "8 - ������� �������� ������ �� �����" << endl;
	cout << "9 - ��������� ���� ������ �����" << endl;
	cout << "10 - ��������� �������� ������ � �����" << endl;
	cout << "11 - �����" << endl;
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	LongInteger firstNumber, secondNumber, thirdNumber;
	int temp;

	cout << "������� ������ ������� ����� �����" << endl;
	cin >> firstNumber;

	cout << "������� ������ ������� ����� �����" << endl;
	cin >> secondNumber;

	cout << "������� ����� �����" << endl;
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
				cout << "----------------------------------�������� ���� ������� ����� �����---------------------------------" << endl;

				thirdNumber = firstNumber + secondNumber;
				cout << "firstNumber + secondNumber = " << thirdNumber << endl;
				cout << endl;

				break;
			}
			case 2:
			{
				cout << "---------------------------------�������� �������� ������ � �����-----------------------------------" << endl;

				thirdNumber = firstNumber + temp;
				cout << "firstNumber + temp = " << thirdNumber << endl;
				cout << endl;

				break;
			}
			case 3:
			{
				cout << "---------------------------------��������� ���� ������� ����� �����-----------------------------------" << endl;

				thirdNumber = firstNumber - secondNumber;
				cout << "firstNumber - secondNumber = " << thirdNumber << endl;
				cout << endl;

				break;
			}
			case 4:
			{
				cout << "---------------------------------��������� �� �������� ������ ������-----------------------------------" << endl;
				
				thirdNumber = firstNumber - temp;
				cout << "firstNumber - temp = " << thirdNumber << endl;
				cout << endl;
				
				break;
			}
			case 5:
			{
				cout << "---------------------------------������������ ���� ������� ����� �����-----------------------------------" << endl;
				
				thirdNumber = firstNumber * secondNumber;
				cout << "firstNumber * secondNumber = " << thirdNumber << endl;
				cout << endl;
				
				break;
			}
			case 6:
			{
				cout << "---------------------------------������������ �������� ������ � �����-----------------------------------" << endl;
				
				thirdNumber = firstNumber * temp;
				cout << "firstNumber * temp = " << thirdNumber << endl;
				cout << endl;
				
				break;
			}
			case 7:
			{
				cout << "---------------------------------������� ���� ������� ����� �����-----------------------------------" << endl;
		
				thirdNumber = firstNumber / secondNumber;
				cout << "firstNumber / secondNumber = " << thirdNumber << endl;
				cout << endl;
			
				break;
			}
			case 8:
			{
				cout << "---------------------------------������� �������� ������ �� �����-----------------------------------" << endl;
			
				thirdNumber = firstNumber / temp;
				cout << "firstNumber / temp = " << thirdNumber << endl;
				cout << endl;
			
				break;
			}
			case 9:
			{
				cout << "---------------------------------��������� ���� ������ �����-----------------------------------" << endl;
		
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
				cout << "---------------------------------��������� �������� ������ � �����-----------------------------------" << endl;
			
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