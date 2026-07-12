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
	for (int i = 0; i < ROWS ; i++)
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


int main()
{
	srand((unsigned)time(NULL));

	int arr[ROWS][COLS];

	FillMatrixWithRandomNum(arr);

	cout << "the following is a 3x3 random matrix : " << endl;

	PrintMatrix(arr);

	return 0;
}