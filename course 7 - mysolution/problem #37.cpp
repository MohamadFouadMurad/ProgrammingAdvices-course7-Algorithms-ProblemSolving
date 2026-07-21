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

void PrintVectorNumbers(vector <string> vString)
{
	
	for (string & i : vString)
	{
		cout << i << endl;
	}

	cout << endl;
}


int main()
{
	vector <string> vS1;

	vS1 = SplitString(ReadString(), " ");

	cout << "Tokens = " << vS1.size() << endl;

	PrintVectorNumbers(vS1);
	
	return 0;
}