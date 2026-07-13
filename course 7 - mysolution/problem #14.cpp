#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace Helpers;
using namespace OutPut;

const int ROWS = 3;
const int COLS = 3;

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

bool CheckScalarMatrix(int Matrix[3][3])
{

	int FirstDiagonalElement = Matrix[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (i == j && Matrix[i][j] != FirstDiagonalElement)
			{
				return false;
			}
			else if (i != j && Matrix[i][j] != 0)
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

	//int Matrix[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int Matrix1[3][3] = { {10,0,0},{0,10,0},{0,0,10} };

	cout << "Matrix 1: " << endl;

	PrintMatrix(Matrix1);

	cout << endl;

	if (CheckScalarMatrix(Matrix1))
	{
		cout << "the Matrices is Scalar" << endl;
	}
	else
	{
		cout << "the Matrices is not Scalar" << endl;
	}

	return 0;
}