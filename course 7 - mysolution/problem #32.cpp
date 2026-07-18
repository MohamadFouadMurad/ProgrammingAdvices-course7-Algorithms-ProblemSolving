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



int main()
{
	char Ch1;

	cout << "pls enter a character?" << endl;
	cin >> Ch1;

	if (IsVowel(Ch1))
	{
		cout << "Yes Letter \'" << Ch1 << "\' is vowel." << endl;
	}
	else
	{
		cout << "NO, Letter \'" << Ch1 << "\' isn't vowel." << endl;
	}
	
	return 0;
}