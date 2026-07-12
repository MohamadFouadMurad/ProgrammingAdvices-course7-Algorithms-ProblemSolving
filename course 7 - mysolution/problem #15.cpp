#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace Helpers;
using namespace OutPut;

const int ROWS = 3;
const int COLS = 3;

void FillMatrixWithRandomNum(int arr[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%0*d    ", 2, arr[i][j]);
			Taps(1);
		}

		cout << endl;
	}
}

int FindNumberInMatrix(int arr[3][3] , int NumberToFind)
{
	int counter = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] == NumberToFind)
			{
				counter++;
			}
		}
	}

	return counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	int NumberToFind;

	FillMatrixWithRandomNum(arr);

	cout << "Matrix 1: " << endl;

	PrintMatrix(arr);

	cout << endl;

	cout << "please enter the number to count in matrix? ";
	cin >> NumberToFind;

	cout << "Number " << NumberToFind << " count in matrix is " << FindNumberInMatrix(arr,NumberToFind) << endl;

	return 0;
}