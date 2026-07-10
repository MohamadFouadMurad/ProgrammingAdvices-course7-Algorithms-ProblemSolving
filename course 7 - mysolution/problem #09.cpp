#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace Helpers;
using namespace OutPut;

const int ROWS = 3;
const int COLS = 3;

void FillTwoDimensionArray(int arr[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMiddleRow(int arr[3][3])
{
	short MiddleRow = ROWS / 2;

	for (int j = 0; j < COLS; j++)
	{
	printf("%0*d    ", 2, arr[MiddleRow][j]);
	}
}

void PrintMiddleCol(int arr[3][3])
{
	short MiddleCol = COLS / 2;

	for (int i = 0; i < ROWS; i++)
	{
		printf("%0*d    ", 2, arr[i][MiddleCol]);
	}

	cout << endl;
}

void printArray(int arr[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%0*d    " , 2 , arr[i][j]);
			Taps(1);
		}

		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillTwoDimensionArray(arr);

	cout << "the following is a 3x3 random matrix : " << endl;

	printArray(arr);

	cout << "print middle row: " << endl;

	PrintMiddleRow(arr);

	cout << "\nprint middle col: " << endl;

	PrintMiddleCol(arr);
}