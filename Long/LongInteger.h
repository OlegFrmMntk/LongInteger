#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
typedef vector <int> longNumb;

class LongInteger
{
	public:
	
		LongInteger();

		friend istream& operator>> (istream &in, LongInteger &longN);
		friend ostream& operator<< (ostream &out, LongInteger &longN);

		friend bool operator > (LongInteger& firstNumber, int& scndNumber);
		friend bool operator < (LongInteger& firstNumber, int& scndNumber);
		friend bool operator >= (LongInteger& firstNumber, int& scndNumber);
		friend bool operator <= (LongInteger& firstNumber, int& scndNumber);
		friend bool operator == (LongInteger& firstNumber, int& scndNumber);
		friend bool operator != (LongInteger& firstNumber, int& scndNumber);
		
		friend bool operator > (int& frstNumber, LongInteger& secondNumber);
		friend bool operator < (int& frstNumber, LongInteger& secondNumber);
		friend bool operator >= (int& frstNumber, LongInteger& secondNumber);
		friend bool operator <= (int& frstNumber, LongInteger& secondNumber);
		friend bool operator == (int& frstNumber, LongInteger& secondNumber);
		friend bool operator != (int& frstNumber, LongInteger& secondNumber);

		friend bool operator > (LongInteger& firstNumber, LongInteger& secondNumber);
		friend bool operator < (LongInteger& firstNumber, LongInteger& secondNumber);
		friend bool operator >= (LongInteger& firstNumber, LongInteger& secondNumber);
		friend bool operator <= (LongInteger& firstNumber, LongInteger& secondNumber);
		friend bool operator == (LongInteger& firstNumber, LongInteger& secondNumber);
		friend bool operator != (LongInteger& firstNumber, LongInteger& secondNumber);

		friend LongInteger operator + (int& frstNumber, LongInteger& secondNumber);
		friend LongInteger operator + (LongInteger& firstNumber, int& secondNumber);
		friend LongInteger operator + (LongInteger& firstNumber, LongInteger& secondNumber);

		friend LongInteger operator += (LongInteger& firstNumber, int& scndNumber);
		friend LongInteger operator += (LongInteger& firstNumber, LongInteger& secondNumber);
		
		friend LongInteger operator - (int& frstNumber, LongInteger& secondNumber);
		friend LongInteger operator - (LongInteger& firstNumber, int& secondNumber);
		friend LongInteger operator - (LongInteger& firstNumber, LongInteger& secondNumber);

		friend LongInteger operator -= (LongInteger& firstNumber, int& scndNumber);
		friend LongInteger operator -= (LongInteger& firstNumber, LongInteger& secondNumber);
		
		friend LongInteger operator * (int& frstNumber, LongInteger& secondNumber);
		friend LongInteger operator * (LongInteger& firstNumber, int& secondNumber);
		friend LongInteger operator * (LongInteger& firstNumber, LongInteger& secondNumber);

		friend LongInteger operator *= (LongInteger& firstNumber, int& scndNumber);
		friend LongInteger operator *= (LongInteger& firstNumber, LongInteger& secondNumber);

		friend LongInteger operator / (LongInteger& firstNumber, int& secondNumber);
		friend LongInteger operator / (LongInteger& firstNumber, LongInteger& secondNumber);

		friend LongInteger operator /= (LongInteger& firstNumber, int& scndNumber);
		friend LongInteger operator /= (LongInteger& firstNumber, LongInteger& secondNumber);

	protected:
	
		longNumb longNumber;
		string longNumberInString;
		bool mark;

		void scan();
		void scan_int(int numberInInt);
		void print();
		string translationToString(int numberInInt);
		int translationToInt(string numberInString);
		longNumb sum(longNumb firstNumb, longNumb secondNumb);
		longNumb diff(longNumb firstNumb, longNumb secondNumb);
		longNumb multiplication(longNumb firstNumb, longNumb secondNumb);
		LongInteger divisionLongOnShort(LongInteger firstNumber, int secondNumber);
		LongInteger division(LongInteger firstNumb, LongInteger secondNumb);
		int compare(LongInteger firstNumb, LongInteger secondNumb);
};