#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"

using namespace std;
using namespace String;


void PrintVowel(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{
		cout << S1[i];

		if (S1[i] == ' ')
		{
			cout << endl;
		}
	}
}

//Another way
/*
void PrintEachWordInString(string S1)
{
	string delim = " ";

	cout << "\nYour string wrords are: \n\n";
	short pos = 0;
	string sWord; 
	
	
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); 

		if (sWord != "")
		{
			cout << sWord << endl;
		}

		S1.erase(0, pos + delim.length());
	}

	if (S1 != "")
	{
		cout << S1 << endl;
	}

}
*/


int main()
{
	string S1 = ReadString();

	cout << "\nyour string words are: " << endl << endl;;

	PrintVowel(S1);

	//Another way
	/*
		PrintEachWordInString(S1);
	*/
	
	return 0;
}