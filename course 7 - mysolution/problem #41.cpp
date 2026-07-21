#include <iostream>
#include <string>
#include <cctype>
//#include "MyHeader/MyMathFunction.h"
#include <vector>

using namespace std;
//using namespace String;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

vector <string> SplitString(string S1, string Delim)
{
	vector <string> vString;

	short pos = 0;
	string sWord;

	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);

		if (sWord != "")
		{
			vString.push_back(sWord);
		}

		S1.erase(0, pos + Delim.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}

	return vString;
}

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

string ReverseWordsInString(string S1)
{
	vector <string> Vstring;
	vector <string> VstringReversed;
	string S2 = "";

	Vstring = SplitString(S1, " ");

	for (int i = Vstring.size() - 1; i > 0; i--)
	{
		VstringReversed.push_back(Vstring[i]);
	}

	return JoinString(VstringReversed, " ");

}

//Another way
/*
string ReverseWordsInString(string S1)
{

	vector <string> vString;
	string S2 = "";

	vString = SplitString(S1, " ");

	vector <string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		--iter;

		S2 += *iter + " ";
	}

	S2 = S2.substr(0, S2.length() - 1);

	return S2;
}
*/

int main()
{
	string S1 = ReadString();

	cout << ReverseWordsInString(S1);
}