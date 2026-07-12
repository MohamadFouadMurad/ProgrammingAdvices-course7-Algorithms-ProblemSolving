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

bool CheckTypicalMatrix(int arr[3][3], int arr2[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] != arr2[i][j])
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3], arr2[3][3];

	cout << "Matrix 1: " << endl;

	FillMatrixWithRandomNum(arr);

	PrintMatrix(arr);

	cout << endl;

	cout << "Matrix 2: " << endl;

	FillMatrixWithRandomNum(arr2);

	PrintMatrix(arr2);

	cout << endl;

	if (CheckTypicalMatrix(arr, arr2))
	{
		cout << "both Matrices are typical" << endl;
	}
	else
	{
		cout << "the Matrices are not typical. " << endl;
	}

	return 0;
}