#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace Helpers;
using namespace std;
using namespace OutPut;


void FillTwoDimensionArray(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void printArray(int arr[3][3], short Rows, short Cols)
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

void SumTwoDimensionArray(int arr[3][3], short Rows, short Cols)
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
void SumMatixRowsInArry(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		arrSum[i] = SumCol(arr, Rows, i);
	}
}

void PrintRowsSumArray(int arr[3],short Rows , short cols)
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

	FillTwoDimensionArray(arr, 3, 3);

	cout << "the following is a 3x3 random matrix : " << endl;

	printArray(arr, 3, 3);

	cout << "the following are the sum if each col in the matrix: " << endl;

	SumTwoDimensionArray(arr, 3, 3);

	//Another way
	/*
	int arrSum[3];
	SumMatixRowsInArry(arr, arrSum, 3, 3);
	PrintRowsSumArray(arrSum,3,3);
	*/

	return 0;
}