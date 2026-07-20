#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace String;

short CountEachWordInString(string S1)
{
	int count = 0;

	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] == ' ')
		{
			count++;
		}
	}

	count++;


	return count;
}

//Another way
/*
short CountEachWordInString(string S1)
{
	string delim = " ";
	short Counter = 0;
	short pos = 0;
	string sWord;
	

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);

		if (sWord != "")
		{
			Counter++;
		}

		S1.erase(0, pos + delim.length());
	}


	if (S1 != "")
	{
		Counter++;
	}


	return Counter;
}
*/

int main()
{
	string S1 = ReadString();
	
	cout << "\nThe number of words in your string is : " << CountEachWordInString(S1);
}