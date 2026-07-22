#include <iostream>
#include <string>
#include <cctype>
//#include "MyHeader/MyMathFunction.h"
#include <vector>

using namespace std;
//using namespace String;

string RemovePunctuationsFromString(string S1)
{
	string S2 = "";

	for (int i = 0; i < S1.length(); i++)
	{
		if (!ispunct(S1[i]))
		{
			S2 += S1[i];
		}
	}

	return S2;
}

/*
string RemoveAllPunctions(string S1)
{
	string S2 = "";

	for(char c:S1)
	{
		if (!ispunct(c))
		{
			S2 += c;
		}
	}

	return S2;
}
*/


int main()
{
	string S1 = "Welcome to Syria, Syria is a nice country; it's amazing.";

	cout << "original string: " << endl;
	cout << S1 << endl << endl;

	cout << "Punctions Removed: " << endl;
	cout << RemovePunctuationsFromString(S1);
}