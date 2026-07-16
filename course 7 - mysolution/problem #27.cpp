#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"

using namespace std;

void InverLetterCase(char Letter)
{
	if (isupper(Letter))
	{

		Letter = tolower(Letter);
		cout << Letter << endl;
	}
	else if (islower(Letter))
	{
		Letter = toupper(Letter);
		cout << Letter << endl;
	}
}

//Another way
/*
char InvertLetterCase(char Char1)
{
	return isupper(Char1) ? tolower(Char1) : toupper(Char1);
}
*/


int main()
{

	char Letter;

	cout << "pls enter a character?" << endl;
	cin >> Letter;

	cout << "\nChar After Inverting Case: \n";

	InverLetterCase(Letter);
	
	
	//Another way
	/*
	 Letter = InvertLetterCase(Letter);

	 cout << Letter << endl;
	*/


	return 0;
}