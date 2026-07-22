#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"
#include <vector>

using namespace std;
using namespace String;

string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sRepalceTo)
{
	short pos = S1.find(StringToReplace);

	while (pos != std::string::npos)
	{
		S1 = S1.replace(pos, StringToReplace.length(), sRepalceTo);
		pos = S1.find(StringToReplace);
	}

	return S1;
}

int main()
{
	string S1 = ReadString();
	string stringToReplace = "hello";
	string sReplaceTo = "hi";
	cout << endl;

	cout << "String after replace: \n" << endl;
	cout << ReplaceWordInStringUsingBuiltInFunction(S1, stringToReplace, sReplaceTo);
}