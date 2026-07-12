#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace Helpers;
using namespace OutPut;

const int ROWS = 3;
const int COLS = 3;

void FillMatrixWithRandomNum(int arr[3][3])
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

	int arr[3][3];

	FillMatrixWithRandomNum(arr);

	cout << "the following is a 3x3 random matrix : " << endl;

	PrintMatrix(arr);
}