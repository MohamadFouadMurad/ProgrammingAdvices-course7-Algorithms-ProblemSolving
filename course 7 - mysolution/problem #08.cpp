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
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Matrix[i][j] = RandomNumber(1, 10);
		}
	}
}

void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3] , int MatrixResult[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			MatrixResult[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
	}
}

void PrintMatrix(int Matrix[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf(" %.*d", 2, Matrix[i][j]);
			Taps(1);
		}

		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3] , Matrix2[3][3] , MatrixResult[3][3];

	FillMatrixWithRandomNum(Matrix1);
	cout << " First Matrix:" << endl;
	PrintMatrix(Matrix1);

	FillMatrixWithRandomNum(Matrix2);
	cout << " Second Matrix:" << endl;
	PrintMatrix(Matrix2);


	cout << endl;



	MultiplyMatrix(Matrix1, Matrix2 , MatrixResult);
	cout << "Multiply Two Matrix , the result is:" << endl;
	PrintMatrix(MatrixResult);

	// printf Formatting types & variations comparison
	/*
	printf("%d\n\n" , 5);

	printf("%.3d\n", 5);
	printf("%.*d\n\n", 3, 5);

	printf("%*d\n", 3, 5);
	printf("%3d\n\n", 5);

	printf("%5.2d\n", 5);
	printf("%5.*d\n", 2, 5);
	printf("%*.*d\n", 5, 2, 5);
	*/

	return 0;
}