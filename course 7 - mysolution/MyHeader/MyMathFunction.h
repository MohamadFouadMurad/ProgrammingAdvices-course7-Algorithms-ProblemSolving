#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

namespace myfunc
{

	int ReadNumber(string message)
	{
		int Number = 0;
		cout << message << " : ";
		cin >> Number;
		return Number;
	}

	int ReadFloatNumber(string message)
	{
		float Number = 0;
		cout << message << " : ";
		cin >> Number;
		return float(Number);
	}

	int ReadDoubeleNumber(string message)
	{
		double Number = 0;
		cout << message << " : ";
		cin >> Number;
		return double(Number);
	}

	string ReadFullName(string message)
	{
		cout << message;
		string FullName = "";
		getline(cin, FullName);
		return FullName;
	}

	string CheckPositiveOrNegativeOrZero(int number)
	{
		if (number > 0)
			return "positive";
		else if (number < 0)
			return "negative";
		else
			return "zero";
	}

	int ReadValidNumberOnly(string message)
	{
		int Number;
		cout << message << endl;
		cin >> Number;


		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;
		}

		return Number;
	}

	void SetWidthInCenter(int  Width, string message)
	{
		int Length = message.length();
		int afterspace = (Width - Length) / 2;
		int beforespace = Width - afterspace;
		cout << setw(beforespace) << message << setw(afterspace) << "";
	}

}

namespace InPut
{
	int printMessageAndReadNumberFromTo(string message, int from, int to)
	{
		int num = 0;
		do
		{
			cout << message << "From" + to_string(from) + "To" + to_string(to) << endl;
			cin >> num;
		} while (num > to || num < from);

		return num;
	}

	int ReadPositiveNumber(string message)
	{
		int num;

		do
		{
			cout << message << endl;
			cin >> num;
		} while (num < 0);

		return num;
	}
}

namespace OutPut
{
	void FindNumberIndex(int arr[100], int arrLength, int target)
	{
		cout << "number you are looking for is: " << target << endl;

		for (int i = 0; i < arrLength; i++)
		{
			if (target == arr[i])
			{
				cout << "the number found at position : " << i << "\n";
				cout << "the number found it's order  : " << i + 1 << "\n";
				return;
			}
		}

		cout << "the number is not found :-(\n";
	}

	void PrintArray(int arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			cout << arr[i] << "\t";
		}
	}

	void PrintStringArray(string arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			cout << "code [" << i + 1 << "] : " << arr[i] << endl;
	}

	string Taps(short NumberOfTaps)
	{
		string tap = "";

		for (int i = 1; i <= NumberOfTaps; i++)
		{
			tap += "\t";
		}

		return tap;
	}

}

namespace Helpers
{
	int RandomNumber(int from, int to)
	{
		int RandomNumber;
		return RandomNumber = rand() % (to - from + 1) + from;
	}

	void FillArrayWithRandomNumbers(int arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arr[i] = RandomNumber(1, 100);
	}

	void CopyReverseArray(int arr1[], int arr2[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			arr2[i] = arr1[arrLength - 1 - i];
		}
	}

	string GenerateWord()
	{
		string word = "";
		word = char(RandomNumber(65, 90));
		word += char(RandomNumber(65, 90));
		word += char(RandomNumber(65, 90));
		word += char(RandomNumber(65, 90));
		return word;
	}

	string GenerateCode()
	{
		string Text = GenerateWord() + "-";
		Text += GenerateWord() + "-";
		Text += GenerateWord() + "-";
		Text += GenerateWord();
		return Text;
	}

	void FillStringArray(string arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arr[i] = GenerateCode();
	}

	bool IsInArray(int searchValue, int arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			if (searchValue == arr[i])
				return true;
		}
		return false;
	}

	bool IsPrimeNumber(int num)
	{
		int M = round(num / 2);
		for (int i = 2; i <= M; i++)
		{
			if (num % i == 0)
				return false;
		}
		return true;
	}

	bool IsPalindrome(int arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] != arr[arrLength - i - 1])
			{
				return false;
			}
		}
		return true;
	}

	bool IsEvenNumber(int number)
	{
		return (number % 2 == 0);
	}

	void ResetScreen()
	{
		system("cls");
		system("color 0F");
	}
}

