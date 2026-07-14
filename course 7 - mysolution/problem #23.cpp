#include <iostream>
#include <string>

using namespace std;

string ReadFullString(string message)
{
	cout << message << endl;
	string FullString = "";
	getline(cin, FullString);
	return FullString;
}


void PrintFirstLettFromString(string Name)
{

	cout << "First letters of this string: " << endl;


	cout << Name[0] << endl;


	for (int i = 1; i < Name.length(); i++)
	{
		if (Name[i] == ' ')
		{
			cout << Name[i + 1] << endl;
		}
	}
}


//Another way
/*
void PrintFirstLetterOfEachWord(string S1)
{
	bool isFirstLetter = true;

	cout << "\nFirst Letters of this string: \n";

	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && isFirstLetter)
		{
			cout << S1[i] << endl;
		}

		isFirstLetter = (S1[i] == ' ' ? true : false);

	}
}
*/

int main()
{

	string Name;

	Name = ReadFullString("please enter your Name?");
	cout << endl;

	cout << endl;

	PrintFirstLettFromString(Name);


	//Another way
	/*
	PrintFirstLetterOfEachWord(ReadFullString("please enter your Name?"));
	*/


	return 0;
}
