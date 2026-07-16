#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace String;

string InvertAllStringLetterCase(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{
		S1[i] = InvertLetterCase(S1[i]);
	}

	return S1;
}

int main()
{

	
	string String1;

	cout << "pls enter a string?" << endl;
	getline(cin,String1);

	cout << "\nChar After Inverting Case: \n";

	 String1 = InvertAllStringLetterCase(String1);

	 cout << String1 << endl;

	return 0;
}