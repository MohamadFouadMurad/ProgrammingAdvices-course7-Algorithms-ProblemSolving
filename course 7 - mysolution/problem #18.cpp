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

bool IsNumberInMatrix(int Matrix2[3][3], int NumberToFindInMatrix)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Matrix2[i][j] == NumberToFindInMatrix)
			{
				return true;
			}
		}
	}

	return false;
}

void IsThereIntersectedNumINMatrix(int Matrix1[3][3],int Matrix2[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{

			int NumbertofindInMatrix = Matrix1[i][j];

			if (IsNumberInMatrix(Matrix2,NumbertofindInMatrix))
			{
				cout << setw(3) << NumbertofindInMatrix << Taps(1);
			}
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };
	int Matrix2[3][3] = { {5,80,90},{22,77,1},{10,8,33} };

	cout << "Matrix 1: " << endl;

	PrintMatrix(Matrix1);

	cout << endl;

	cout << "Matrix 2: " << endl;

	PrintMatrix(Matrix2);

	cout << endl;

	cout << "Intersected numbers are: " << endl;


	IsThereIntersectedNumINMatrix(Matrix1, Matrix2);

	return 0;
}