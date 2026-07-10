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

	int counter = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			counter++;
			arr[i][j] = counter;
		}
	}
}

void TransposeArray(int arr[3][3] , int arrTranspose[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arrTranspose[j][i] = arr[i][j];
		}
	}
}

void printArray(int arr[3][3])
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

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	int arrTranspose[3][3];

	FillTwoDimensionArray(arr);

	cout << "the following is a 3x3 random matrix : " << endl;

	printArray(arr);

	cout << "the following is the transposed matrix : " << endl;

	TransposeArray(arr, arrTranspose);


	printArray(arrTranspose);


	//Another way 
	/*
	for (int j = 0; j < ROWS; j++)
	{
		for (int i = 0; i < COLS; i++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
	*/
	return 0;
}