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

int SumMatrix(int arr[3][3])
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

bool CheckEqualsMatrix(int arr[3][3], int arr2[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) 
		{
			if (SumMatrix(arr) == SumMatrix(arr2))
			{
				return true;
			}
		}
	}

	return false;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3] , arr2[3][3];

	cout << "Matrix 1: " << endl;

	FillMatrixWithRandomNum(arr);

	PrintMatrix(arr);

	cout << endl;

	cout << "Array 2: " << endl;

	FillMatrixWithRandomNum(arr2);

	PrintMatrix(arr2);

	cout << endl;

	if (CheckEqualsMatrix(arr,arr2))
	{
		cout << "both Matrices are equals." << endl;
	}
	else
	{
		cout << "the Matrices are not equals. " << endl;
	}

	return 0;
}