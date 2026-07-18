#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace String;

int countLetterInString(string S1, char Ch1 , bool MatchCase = true)
{
	int count = 0;

	for (int i = 0; i < S1.length(); i++)
	{
		if (MatchCase)
		{

		if (S1[i] == Ch1)
		{
			count++;
		}

		}
		else
		{
			if (tolower(S1[i]) == tolower(Ch1) )
			{
				count++;
			}
		}
	}

	return count;
}

int main()
{
	char Ch1;

	string S1 = ReadString();

	cout << endl;


	cout << "pls enter a character?" << endl;
	cin >> Ch1;



	cout << "\nLetter \'" << Ch1 << "\' Count = " << countLetterInString(S1, Ch1) << endl;
	
	cout << "\nLetter \'" << Ch1 << "\' or  \'" << InvertLetterCase(Ch1) << "\' Count = " << countLetterInString(S1,Ch1,false) << endl;;

	return 0;
}