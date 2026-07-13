#include <iostream>
#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace Helpers;
using namespace OutPut;

const int ROWS = 3;
const int COLS = 3;

void FillMatrixWithRandomNum(int Matrix[3][3])
{

	int counter = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			counter++;
			Matrix[i][j] = counter;
		}
	}
}

void TransposeMatrix(int Matrix[3][3] , int TransposeMatrix[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			TransposeMatrix[j][i] = Matrix[i][j];
		}
	}
}

void PrintMatrix(int Matrix[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << setw(3) << Matrix[i][j] << Taps(1);
		}

		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];
	int TransposeMatr[3][3];

	FillMatrixWithRandomNum(Matrix1);

	cout << "the following is a 3x3 random matrix : " << endl;

	PrintMatrix(Matrix1);

	cout << "the following is the transposed matrix : " << endl;

	TransposeMatrix(Matrix1, TransposeMatr);


	PrintMatrix(TransposeMatr);


	//Another way 
	/*
	for (int j = 0; j < ROWS; j++)
	{
		for (int i = 0; i < COLS; i++)
		{
			cout << setw(3) << Matrix[i][j] << " ";
		}
		cout << "\n";
	}
	*/
	return 0;
}