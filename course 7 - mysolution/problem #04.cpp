#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace Helpers;
using namespace std;
using namespace OutPut;


void FillTwoDimensionArray(int arr[3][3] , short Rows , short Cols)
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

void SumTwoDimensionArray(int arr[3][3] , short Rows , short Cols)
{
	for (int i = 0; i < Cols; i++)
	{
		cout << "Col " << i + 1 << " Sum = " << SumCol(arr, Rows , i) << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillTwoDimensionArray(arr,3,3);

	cout << "the following is a 3x3 random matrix : " << endl;

	printArray(arr,3,3);

	cout << "the following are the sum if each col in the matrix: " << endl;

	SumTwoDimensionArray(arr,3,3);

	return 0;
}