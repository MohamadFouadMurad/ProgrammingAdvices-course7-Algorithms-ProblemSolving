#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace Helpers;
using namespace OutPut;

const int ROWS = 3;
const int COLS = 3;

void FillMatrixWithRandomNum(int Matrix[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Matrix[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int Matrix[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%0*d    ", 2, Matrix[i][j]);
			Taps(1);
		}

		cout << endl;
	}
}

int SumMatrix(int Matrix[3][3])
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Matrix[i][j];
		}
	}
	return sum;
}

bool CheckEqualsMatrix(int Matrix1[3][3], int Matrix2[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) 
		{
			if (SumMatrix(Matrix1) == SumMatrix(Matrix2))
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

	int Matrix[3][3] , Matrix2[3][3];

	cout << "Matrix 1: " << endl;

	FillMatrixWithRandomNum(Matrix);

	PrintMatrix(Matrix);

	cout << endl;

	cout << "Matrix 2: " << endl;

	FillMatrixWithRandomNum(Matrix2);

	PrintMatrix(Matrix2);

	cout << endl;

	if (CheckEqualsMatrix(Matrix,Matrix2))
	{
		cout << "both Matrices are equals." << endl;
	}
	else
	{
		cout << "the Matrices are not equals. " << endl;
	}

	return 0;
}