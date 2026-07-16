#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

int CountCapitalLetters(string S1)
{

	int count = 0;

	for (int i = 0; i < S1.length(); i++)
	{
		if (isupper(S1[i]))
		{
			count++;
		}
	}

	return count;
}

int CountSmallLetters(string S1)
{
		int count = 0;

		for (int i = 0; i < S1.length(); i++)
		{
			if (islower(S1[i]))
			{
				count++;
			}
		}

		return count;
}

//Another way
/*
enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 3 };


short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
{
	if (WhatToCount == enWhatToCount::All)
	{
		return S1.length();
	}

	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
			Counter++;
		if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
			Counter++;
	}

	return Counter;
}
*/


int main()
{
	string S1 = ReadString();

	cout << "\nString Length = " << S1.length();
	cout << "\nCapital letter count = " << CountCapitalLetters(S1);
	cout << "\nSmall Letters count = " << CountSmallLetters(S1);


	//Another way
	/*
	cout << "\n\nMethod 2\n";
	cout << "\nString Length = " << CountLetters(S1);
	cout << "\nCapital Letters Count= " << CountLetters(S1,enWhatToCount::CapitalLetters);
	cout << "\nSmall Letters Count= " << CountLetters(S1, enWhatToCount::SmallLetters);
	*/

	return 0;
}