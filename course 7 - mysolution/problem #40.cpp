#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"
#include <vector>

using namespace std;
using namespace String;

string JoinString(vector <string>& vString, string delim)
{
	string S1 = "";

	for (string& word : vString)
	{
		if (!S1.empty())
		{
			S1 += delim;
		}
		S1 += word;
	}

	return S1;
}

string JoinString(string arrString[], short length, string delim)
{
	string S1 = "";

	for (short i = 0; i < length; i++)
	{
		 S1 +=  arrString[i] + delim;
	}

	return S1.substr(0,S1.length() - delim.length());
}

int main()
{
		vector <string> vString = { "Mohamd" , "fouad" , "lamia" };
		string arrString[] = { "Mohamd" , "fouad" , "lamia" };

		cout << "Vector after join: \n";
		cout << JoinString(vString, " ") << endl;

		cout << "Array after join: \n";
		cout << JoinString(arrString,3, " ");
}