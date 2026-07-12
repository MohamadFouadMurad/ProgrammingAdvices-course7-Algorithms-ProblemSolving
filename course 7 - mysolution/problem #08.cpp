#include <iomanip>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace Helpers;
using namespace OutPut;

const int ROWS = 3;
const int COLS = 3;

void FillMatrixWithRandomNum(int arr[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void MultiplyMatrix(int arr[3][3], int arr2[3][3] , int arrResult[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arrResult[i][j] = arr[i][j] * arr2[i][j];
		}
	}
}

void PrintMatrix(int arr[3][3])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf(" %.*d", 2, arr[i][j]);
			Taps(1);
		}

		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3] , arr2[3][3] , arrResult[3][3];

	FillMatrixWithRandomNum(arr);
	cout << " First array:" << endl;
	PrintMatrix(arr);

	FillMatrixWithRandomNum(arr2);
	cout << " Second array:" << endl;
	PrintMatrix(arr2);


	cout << endl;



	MultiplyMatrix(arr, arr2 , arrResult);
	cout << "Multiply Two Array , the result is:" << endl;
	PrintMatrix(arrResult);

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
}