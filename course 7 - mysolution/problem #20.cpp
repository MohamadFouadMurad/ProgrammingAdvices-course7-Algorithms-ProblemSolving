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

bool IsPalindromeMatrix(int Matrix[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS/2; j++)
		{
			if (Matrix[i][j] != Matrix[i][COLS - j - 1])
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

	//int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
	int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,8} };

	cout << "Matrix 1: " << endl;

	PrintMatrix(Matrix1);

	cout << endl;

	if (IsPalindromeMatrix(Matrix1))
	{
		cout << "Matrix is Palindrome." << endl;
	}
	else
	{
		cout << "Matrix is NOT Palindrome." << endl;
	}

	return 0;
}