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

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];

	cout << "the Matrix is : " << endl;

	FillMatrixWithRandomNum(Matrix1);

	PrintMatrix(Matrix1);

	cout << "sum of Matrix is : " << SumMatrix(Matrix1);

	return 0;
}