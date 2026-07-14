#include <iostream>
#include <cstdio>

using namespace std;

void PrintFibonacciSeries(int prev1, int prev2, int FibNum , int Num)
{
	printf(" %.2d ", prev1);

	for (int i = 2; i < Num; i++)
	{
		FibNum = prev1 + prev2;

		prev1 = prev2;
		prev2 = FibNum;

		printf(" %.2d ", FibNum);
	}
}

int main()
{

	int prev1 = 1, prev2 = 1, FibNum = 0;

	PrintFibonacciSeries(prev1, prev2, FibNum , 10);

	return 0;
}
