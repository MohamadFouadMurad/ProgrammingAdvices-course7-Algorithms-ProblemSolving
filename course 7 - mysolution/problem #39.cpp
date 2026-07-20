#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"
#include <vector>

using namespace std;
using namespace String;

/*
string JoinString(vector <string> & vString , string delim)
{
	string S1;

	for (string & s:vString)
	{
		S1 += s + delim;
	}

	return S1.substr(0,S1.length() - delim.length());
}
*/


string JoinString(vector <string> & vString, string delim)
{
	string S1 = "";

	for (string & word : vString)
	{
		if (!S1.empty())
		{
			S1 += delim;
		}
		S1 += word;
	}

	return S1;
}

int main()
{
	vector <string> vString = { "Mohamd" , "fouad" , "lamia"};


	cout << "Vector after join: \n";
	cout << JoinString(vString, " ");

}