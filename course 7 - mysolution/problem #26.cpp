#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void LowerAllString(string Name)
{
	for (int i = 0; i < Name.length(); i++)
	{
		if (Name[i] != ' ')
		{
			Name[i] = tolower(Name[i]);
		}
	}

	cout << Name << endl;
}

void UpperAllString(string Name)
{

	for (int i = 0; i < Name.length(); i++)
	{
		if (Name[i] != ' ')
		{
			Name[i] = toupper(Name[i]);
		}
	}

	cout << Name << endl;
}



int main()
{

	string Name;

	cout << "pls enter your name: " << endl;
	getline(cin,Name);

	cout << endl;

	cout << "String after Upper: " << endl << endl;

	UpperAllString(Name);

	cout << endl;

	cout << "String after lower: " << endl << endl;

	LowerAllString(Name);

	return 0;
}