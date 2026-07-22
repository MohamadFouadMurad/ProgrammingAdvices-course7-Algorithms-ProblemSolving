#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"
#include <vector>

using namespace std;
using namespace String;

string LowerAllString(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			S1[i] = tolower(S1[i]);
		}
	}

	return S1;
}

string ReplaceWordInStringUsingSplit(string S1, string StringToReplace, string ReplaceTo, bool MatchCase = true)
{
	vector <string> vString = SplitString(S1 , " ");

	for (int i = 0; i < vString.size(); i++)
	{
		if (MatchCase)
		{
			if (vString[i] == StringToReplace)
			{
				vString[i] = ReplaceTo;
			}
		}
		else
		{
			if (LowerAllString(vString[i]) == LowerAllString(StringToReplace))
			{
				vString[i] = ReplaceTo;
			}
		}
	}

	return JoinString(vString, " ");
}

int main()
{
	string S1 = "Welcome to Syria , Syria is a nice country";
	string StringToReplace = "syria";
	string ReplaceTo = "USA";
	
	cout << "original string: " << endl;
	cout << S1 << endl << endl;

	cout << "Replace with match case: " << endl;;
	cout << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo);
	cout << endl << endl;

	cout << "Replace with dont match case: ";
	cout << "\n" << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo, false) << endl;

}