#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace Helpers;
using namespace OutPut;

const int ROWS = 3;
const int COLS = 3;

void PrintMatrix(int Matrix[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%0*d    ", 2, Matrix[i][j]);
			Taps(1);
		}

		cout << endl;
	}
}

void FindMaxAndMinimumNumberInMatrix(int Matrix[3][3])
{
	int MaxNumber = Matrix[0][0];
	int MinimumNumber = Matrix[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Matrix[i][j] > MaxNumber)
			{
				MaxNumber = Matrix[i][j];
			}

			if (Matrix[i][j] < MinimumNumber)
			{
				MinimumNumber = Matrix[i][j];
			}
		}
	}


	cout << "max Number is : " << MaxNumber << endl;
	cout << "Minimum Number is : " << MinimumNumber << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { {77,5,12},{22,20,6},{14,3,9} };

	cout << "Matrix 1: " << endl;

	PrintMatrix(Matrix1);

	cout << endl;

	FindMaxAndMinimumNumberInMatrix(Matrix1);

	return 0;
}