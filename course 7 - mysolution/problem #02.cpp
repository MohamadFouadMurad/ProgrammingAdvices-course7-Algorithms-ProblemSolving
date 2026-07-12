#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace Helpers;
using namespace std;
using namespace OutPut;

const int ROWS = 3;
const int COLS = 3;


void FillMatrixWithRandomNum(int arr[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << setw(3) << arr[i][j] << Taps(1);
		}

		cout << endl;
	}
}

int SumRow(int arr[3][3], short Rows, short Cols)
{
	int sum = 0;

	for (int j = 0; j < Cols; j++)
	{
		sum += arr[Rows][j];
	}

	return sum;
}

void SumTwoDimensionMatrix(int arr[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << SumRow(arr, i, COLS) << endl;
	} 
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[ROWS][COLS];

	FillMatrixWithRandomNum(arr);

	cout << "the following is a 3x3 random matrix : " << endl;

	PrintMatrix(arr);

	cout << "the following are the sum if each row in the matrix: " << endl;

	SumTwoDimensionMatrix(arr);

	return 0;
}