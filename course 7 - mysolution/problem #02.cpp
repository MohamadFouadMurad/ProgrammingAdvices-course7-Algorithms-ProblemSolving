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
			cout << setw(3) << Matrix[i][j] << Taps(1);
		}

		cout << endl;
	}
}

int SumRow(int Matrix[3][3], short Rows)
{
	int sum = 0;

	for (int j = 0; j < COLS; j++)
	{
		sum += Matrix[Rows][j];
	}

	return sum;
}

void SumTwoDimensionMatrix(int Matrix[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << SumRow(Matrix,i) << endl;
	} 
}


int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[ROWS][COLS];

	FillMatrixWithRandomNum(Matrix1);

	cout << "the following is a 3x3 random matrix : " << endl;

	PrintMatrix(Matrix1);

	cout << "the following are the sum if each row in the matrix: " << endl;

	SumTwoDimensionMatrix(Matrix1);

	return 0;
}