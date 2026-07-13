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

void PrintMiddleRow(int Matrix[3][3])
{
	short MiddleRow = ROWS / 2;

	for (int j = 0; j < COLS; j++)
	{
	printf("%0*d    ", 2, Matrix[MiddleRow][j]);
	}
}

void PrintMiddleCol(int Matrix[3][3])
{
	short MiddleCol = COLS / 2;

	for (int i = 0; i < ROWS; i++)
	{
		printf("%0*d    ", 2, Matrix[i][MiddleCol]);
	}

	cout << endl;
}

void PrintMatrix(int Matrix[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%0*d    " , 2 , Matrix[i][j]);
			Taps(1);
		}

		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];

	FillMatrixWithRandomNum(Matrix1);

	cout << "the following is a 3x3 random matrix : " << endl;

	PrintMatrix(Matrix1);

	cout << "print middle row: " << endl;

	PrintMiddleRow(Matrix1);

	cout << "\nprint middle col: " << endl;

	PrintMiddleCol(Matrix1);
}