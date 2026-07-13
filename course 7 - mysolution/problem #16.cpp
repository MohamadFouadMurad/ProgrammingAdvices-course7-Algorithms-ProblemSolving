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

bool CheckSparseMatrix(int Matrix[3][3])
{
	int zero = 0;
	int number = 0;


	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Matrix[i][j] == 0)
			{
				zero++;
			}
			else if (Matrix[i][j] != 0)
			{
				number++;
			}
		}
	}



	return zero > number;
}



//Another way
/*
short CountNumberInMatrix(int Matrix[3][3], int Number)
{
	short NumberCount = 0;

	for (short i = 0; i < ROWS; i++)
	{
		for (short j = 0; j < COLS; j++)
		{
			if (Matrix[i][j] == Number)
			{
				NumberCount++;
			};
		}
	}
	return NumberCount;
}

bool IsSparseMatrix(int Matrix[3][3])
{
	short MatrixSize = ROWS * COLS;
	return (CountNumberInMatrix(Matrix,0) >= ceil((float) MatrixSize / 2));
}
*/




int main()
{
	srand((unsigned)time(NULL));

	//int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int Matrix1[3][3] = { {10,0,0},{0,10,2},{0,0,10} };

	cout << "Matrix 1: " << endl;

	PrintMatrix(Matrix1);

	cout << endl;

	if (CheckSparseMatrix(Matrix1))
	{
		cout << "It is Sparse" << endl;
	}
	else
	{
		cout << "It's NOT Sparse" << endl;
	}

	//Another  way
	/*
	if (IsSparseMatrix(Matrix1, 3, 3))
		cout << "\nYes: It is Sparse\n";
	else
		cout << "\nNo: It's NOT Sparse\n";
	system("pause>0");
	*/


	return 0;
}