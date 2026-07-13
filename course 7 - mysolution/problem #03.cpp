#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace Helpers;
using namespace std;
using namespace OutPut;

const int ROWS = 3;
const int COLS = 3;


void FillMatrixWithRandomNum(int Matrix[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Matrix[i][j] = RandomNumber(1, 100);
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

int SumRow(int Matrix[3][3], short Rows, short Cols)
{
	int sum = 0;

	for (int j = 0; j < Cols; j++)
	{
		sum += Matrix[Rows][j];
	}

	return sum;
}

void SumTwoDimensionArrayAndAddToOneDimensionMatrix(int Matrix[3][3]) 
{

	int x[3];

	for (int i = 0; i < ROWS; i++)
	{
		x[i] = SumRow(Matrix, i, COLS);
	}

	for (int i = 0; i < ROWS; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << x[i] << endl;
	}
}



// Another way
/*
void SumRowsInMatrix(int Matrix[3][3], int arrSum[3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		arrSum[i] = SumRow(Matrix, i, Cols);
	}
}

void PrintRowsSumMatrix(int Matrix[3])
{
	cout << "\nThe the following are the sum of each row in the matrix:\n";

		for (short i = 0; i < ROWS; i++)
		{
			cout << " Row " << i + 1 << " Sum = " << Matrix[i] << endl;
		}
}
*/



int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[ROWS][COLS];

	FillMatrixWithRandomNum(Matrix1);

	cout << "the following is a 3x3 random matrix : " << endl;

	PrintMatrix(Matrix1);

	cout << "the following are the sum if each row in the matrix: " << endl;

	SumTwoDimensionArrayAndAddToOneDimensionMatrix(Matrix1);


	//Another way
	/*
	int Matrix1Sum[3];
	SumRowsInMatrix(Matrix, Matrix1Sum, 3, 3);
	PrintRowsSumMatrix(Matrix1Sum)
	*/

	return 0;
}