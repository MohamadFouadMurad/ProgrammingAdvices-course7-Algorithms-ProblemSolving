#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace String;


bool IsVowel(char Ch1)
{
	Ch1 = tolower(Ch1);

	return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'o') || (Ch1 == 'u') || (Ch1 == 'i'));
}

short CountVowel(string S1)
{
	short count = 0;

	for (int i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
		{
			count++;
		}
	}

	return count++;
}



int main()
{
	string S1 = ReadString();

	cout << "\n Number of vowel is : " << CountVowel(S1) << endl;

	return 0;
}