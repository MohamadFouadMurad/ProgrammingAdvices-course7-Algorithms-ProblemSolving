#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace Helpers;
using namespace OutPut;

const int ROWS = 3;
const int COLS = 3;

void PrintMatrix(int arr[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%0*d    ", 2, arr[i][j]);
			Taps(1);
		}

		cout << endl;
	}
}

bool CheckIdentityMatrix(int arr[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if ( i == j && arr[i][j] != 1)
			{
				return false;
			}
			else if (i != j && arr[i][j] != 0)
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{
	srand((unsigned)time(NULL));

	//int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int arr[3][3] = { {1,0,0},{0,1,0},{0,0,1} };

	cout << "Matrix 1: " << endl;

	PrintMatrix(arr);

	cout << endl;

	if (CheckIdentityMatrix(arr))
	{
		cout << "the Matrices is identity" << endl;
	}
	else
	{
		cout << "the Matrices is not identity" << endl;
	}

	return 0;
}