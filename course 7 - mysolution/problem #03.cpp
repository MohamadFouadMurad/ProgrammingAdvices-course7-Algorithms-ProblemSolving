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

void SumTwoDimensionArrayAndAddToOneDimensionMatrix(int arr[3][3]) 
{

	int x[3];

	for (int i = 0; i < ROWS; i++)
	{
		x[i] = SumRow(arr, i, COLS);
	}

	for (int i = 0; i < ROWS; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << x[i] << endl;
	}
}



// Another way
/*
void SumRowsInMatrix(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		arrSum[i] = SumRow(arr, i, Cols);
	}
}

void PrintRowsSumMatrix(int arr[3])
{
	cout << "\nThe the following are the sum of each row in the matrix:\n";

		for (short i = 0; i < ROWS; i++)
		{
			cout << " Row " << i + 1 << " Sum = " << arr[i] << endl;
		}
}
*/



int main()
{
	srand((unsigned)time(NULL));

	int arr[ROWS][COLS];

	FillMatrixWithRandomNum(arr);

	cout << "the following is a 3x3 random matrix : " << endl;

	PrintMatrix(arr);

	cout << "the following are the sum if each row in the matrix: " << endl;

	SumTwoDimensionArrayAndAddToOneDimensionMatrix(arr);


	//Another way
	/*
	int arrSum[3];
	SumRowsInMatrix(arr, arrSum, 3, 3);
	PrintRowsSumMatrix(arrSum)
	*/

	return 0;
}