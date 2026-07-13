#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace Helpers;
using namespace std;
using namespace OutPut;


void FillMatrixWithRandomNum(int Matrix[3][3] , short Rows , short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Matrix[i][j] = RandomNumber(1, 100);
		}
	}
}

void printMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf("%0*d    ", 2, Matrix[i][j]);
			Taps(1);
		}

		cout << endl;
	}
}

int SumCol(int Matrix[3][3], short Rows, short Cols)
{
	int sum = 0;

	for (int j = 0; j < Rows; j++)
	{
		sum += Matrix[j][Cols];
	}

	return sum;
}

void SumColInMatrix(int Matrix[3][3] , short Rows , short Cols)
{
	for (int i = 0; i < Cols; i++)
	{
		cout << "Col " << i + 1 << " Sum = " << SumCol(Matrix, Rows , i) << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];

	FillMatrixWithRandomNum(Matrix1,3,3);

	cout << "the following is a 3x3 random matrix : " << endl;

	printMatrix(Matrix1,3,3);

	cout << "the following are the sum if each col in the matrix: " << endl;

	SumColInMatrix(Matrix1,3,3);

	return 0;
}