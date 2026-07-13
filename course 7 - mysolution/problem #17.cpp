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

bool IsNumberInMatrix(int Matrix[3][3], int NumberToFind)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Matrix[i][j] == NumberToFind)
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

	int Matrix1[3][3];
	int NumberToFind;

	FillMatrixWithRandomNum(Matrix1);

	cout << "Matrix 1: " << endl;

	PrintMatrix(Matrix1);

	cout << endl;

	cout << "please enter the number to count in matrix? ";
	cin >> NumberToFind;

	cout << endl;

	if (IsNumberInMatrix(Matrix1,NumberToFind))
	{
		cout << "yes it is there." << endl;
	}
	else
	{
		cout << "no it's not there." << endl;
	}


	return 0;
}