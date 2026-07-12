#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace Helpers;
using namespace std;
using namespace OutPut;


void FillMatrixWithRandomNum(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void printMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << Taps(1);
		}

		cout << endl;
	}
}

int SumCol(int arr[3][3], short Rows, short Cols)
{
	int sum = 0;

	for (int j = 0; j < Rows; j++)
	{
		sum += arr[j][Cols];
	}

	return sum;
}

void SumColInMatrix(int arr[3][3], short Rows, short Cols)
{
	int arrSum[3];

	for (int i = 0; i < Cols; i++)
	{
		arrSum[i] = SumCol(arr, Rows, i);
	}

	for (int i = 0; i < Cols; i++)
	{
		cout << "Col " << i + 1 << " Sum = " << arrSum[i] << endl;
	}
}

// Another way
/*
void SumRowsInMatrix(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		arrSum[i] = SumCol(arr, Rows, i);
	}
}

void PrintSumRowsInMatrix(int arr[3],short Rows , short cols)
{
	cout << "\nThe the following are the sum of each row in the matrix:\n";

		for (short i = 0; i < Rows; i++)
		{
			cout << " Col " << i + 1 << " Sum = " << arr[i] << endl;
		}
}
*/

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillMatrixWithRandomNum(arr, 3, 3);

	cout << "the following is a 3x3 random matrix : " << endl;

	printMatrix(arr, 3, 3);

	cout << "the following are the sum if each col in the matrix: " << endl;

	SumColInMatrix(arr, 3, 3);

	//Another way
	/*
	int arrSum[3];
	SumRowsInMatrix(arr, arrSum, 3, 3);
	PrintSumRowsInMatrix(arrSum,3,3);
	*/

	return 0;
}