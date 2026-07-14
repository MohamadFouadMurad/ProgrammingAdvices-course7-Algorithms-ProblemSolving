#include <iostream>
#include <cstdio>

using namespace std;

void PrintFibonacciSeriesUsingRecursion(int prev1, int prev2, int Num)
{
	printf(" %.2d ", prev1);

	if (Num < 2)
	{
		return;
	}
	else
	{
		 PrintFibonacciSeriesUsingRecursion(prev2, prev1 + prev2 , Num - 1);
	}
}

int main()
{

	int prev1 = 1, prev2 = 1;

	PrintFibonacciSeriesUsingRecursion(prev1, prev2, 10);

	return 0;
}




//Another way
/*
#include <iostream>
using namespace std;


void PrintFibonacciUsingRecurssion(short Number, int Prev1, int Prev2)
{
	int FebNumber = 0;
	if (Number > 0)


	{

	FebNumber = Prev2 + Prev1;
	Prev2 = Prev1;
	Prev1 = FebNumber;
	cout << FebNumber << " ";
	PrintFibonacciUsingRecurssion(Number - 1, Prev1, Prev2);

	}
}


int main()
{

PrintFibonacciUsingRecurssion(10, 0, 1);

system("pause>0");

}
*/