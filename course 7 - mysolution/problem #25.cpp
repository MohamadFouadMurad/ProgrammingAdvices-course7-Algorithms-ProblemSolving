#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadFullString(string message)
{
	cout << message << endl;
	string FullString = "";
	getline(cin, FullString);
	return FullString;
}


void LowerFirstLettFromEachWord(string Name)
{
	cout << endl;

	int isFirstLetter = true;

	cout << "String After Conversion: " << endl;

	for (int i = 0; i < Name.length(); i++)
	{
		if (Name[i] != ' ' && isFirstLetter)
		{
			Name[i] = tolower(Name[i]);
		}

		isFirstLetter = (Name[i] == ' ' ? true : false);
	}

	cout << Name << endl;
}



int main()
{

	LowerFirstLettFromEachWord(ReadFullString("please enter your Name?"));

	return 0;
}
