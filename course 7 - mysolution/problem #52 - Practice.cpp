#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include <vector>

using namespace std;


int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

int ColSum(int arr[3][3], short RowNumber, short Cols)
{
	int sum = 0;

	for (short j = 0; j < RowNumber; j++)
	{
		sum += arr[j][Cols];
	}

	return sum;
}

void PrintEachColSum(int arr[3][3], short Rows, short Cols)
{
	cout << "\nThe the following are the sum of each col in the matrix:\n";

	for (short i = 0; i < Cols; i++)
	{
		cout << " col " << i + 1 << " Sum = " << ColSum(arr, Rows, i) << endl;
	}
}

int colSumInoneDemArray(int x[3][3], int SumCol[3], short Rows)
{
	for (short i = 0; i < Rows; i++)
	{
		SumCol += x[i][i];
	}

	return SumCol[3];
}

void FillArrayWithOrderedNumbers(int x[3][3], int Rows, int Cols)
{
	short Counter = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Counter++;
			x[i][j] = Counter;
		}
	}
}

void TransposeMatrix(int x[3][3], int TransposeArr[3][3], int Rows, int Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			TransposeArr[i][j] = x[j][i];
		}
	}
}

void MutliplyTwoMatrix(int arr1[3][3], int arr2[3][3], int Sum[3][3], int Rows, int Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
}

void PrintMiddleRow(int arr[3][3], int Rows, int Cols)
{
	for (short i = 0; i < Cols; i++)
	{
		cout << arr[1][i] << "   ";
	}
}

void PrintMiddleCol(int arr[3][3], int Rows, int Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		cout << arr[i][1] << "   ";
	}
}

int SumOfMatrix(int x[3][3], int Rows, int Cols)
{
	int Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum += x[i][j];
		}
	}
	return Sum;
}

bool IsEqualSum(int x[3][3], int x2[3][3], int Rows, int cols)
{
	if (SumOfMatrix(x, Rows, cols) == SumOfMatrix(x2, Rows, cols))
	{
		return true;
	}
	return false;
}

bool Istypical(int x[3][3], int x2[3][3], int Rows, int cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (x[i][j] != x2[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

bool isIdentity(int x[3][3], int Rows, int cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j && x[i][j] != 1)
			{
				return	false;
			}
			else
				if (i != j && x[i][j] != 0)
				{
					return false;
				}
		}
	}
	return true;
}

bool isScalar(int x[3][3], int Rows, int cols)
{

	int number = x[0][0];
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j && x[i][j] != number)
			{
				return	false;
			}
			else
				if (i != j && x[i][j] != 0)
				{
					return false;
				}
		}
	}
	return true;
}

int countNumberInMatrix(int x[3][3], int NumberToCount, int Rows, int Cols)
{
	int count = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (x[i][j] == NumberToCount)
			{
				count++;
			}
		}
	}

	return count;
}

bool isSparce(int x[3][3], int Rows, int Cols)
{
	int NumberOfZero = countNumberInMatrix(x, 0, 3, 3);


	int Count = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (x[i][j] != 0)
			{
				Count++;
			}
		}
	}

	return (NumberOfZero > Count);
}

bool isNumberExsist(int x[3][3], int NumberToCount, int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (x[i][j] == NumberToCount)
			{
				return true;
			}
		}
	}
	return false;
}

void PrintNumberIntersected(int x1[3][3], int x2[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			int Number = x1[i][j];

			if (isNumberExsist(x2, Number, 3, 3))
			{
				cout << Number << "   ";
			}
		}
	}
}

int MinNumberInMatrix(int x[3][3], int Rows, int Cols)
{
	int MinNumber = x[0][0];
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{

			if (x[i][j] < MinNumber)
			{
				MinNumber = x[i][j];
			}
		}
	}

	return MinNumber;
}

int MaxNumberInMatrix(int x[3][3], int Rows, int Cols)
{
	int MaxNumber = x[0][0];
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{

			if (x[i][j] > MaxNumber)
			{
				MaxNumber = x[i][j];
			}
		}
	}

	return MaxNumber;
}

bool isPalindrome(int x[3][3], int Rowx, int Cols)
{
	for (int i = 0; i < Rowx; i++)
	{
		for (int j = 0; j < Cols / 2; j++)
		{
			if (x[i][j] != x[i][Cols - j - 1])
			{
				return false;
			}
		}
	}

	return	true;
}

void PrintFibonacciUsingLoop(short Number)
{
	int FebNumber = 0;

	int Prev2 = 0, Prev1 = 1;

	cout << "1 ";

	for (short i = 2; i <= Number; ++i)
	{
		FebNumber = Prev1 + Prev2;
		cout << FebNumber << " ";
		Prev2 = Prev1;
		Prev1 = FebNumber;
	}
}

void PrintFibonacciUsingRecurssion(short Number, int Prev1, int Prev2)
{
	int FebNumber = 0;

	if (Number > 0)
	{
		FebNumber = Prev2 + Prev1;
		Prev2 = Prev1;
		Prev1 = FebNumber;
		cout << FebNumber << " ";
		PrintFibonacciUsingRecurssion(Number - 1, Prev1, Prev2);
	}
}

string ReadString()
{
	string S1;
	cout << "pls enter a string?\n";
	getline(cin, S1);
	return	S1;
}

char ReadChar()
{
	char C1;
	cout << "pls enter a Character?" << endl;
	cin >> C1;
	return C1;
}

void PrintFirstLetterFromEachString(string Word)
{
	bool isFirstLetter = true;

	cout << "\nFirst letters of this string: \n";

	for (short i = 0; i < Word.length(); i++)
	{
		if (Word[i] != ' ' && isFirstLetter)
		{
			cout << Word[i] << endl;
		}
		isFirstLetter = (Word[i] == ' ' ? true : false);
	}
}

string UpperfirstLetterInString(string S1)
{
	bool isFirstLetter = true;

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && isFirstLetter)
		{
			S1[i] = toupper(S1[i]);
		}
		isFirstLetter = (S1[i] == ' ' ? true : false);
	}

	return S1;
}

string LowerfirstLetterInString(string S1)
{
	bool isFirstLetter = true;

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && isFirstLetter)
		{
			S1[i] = tolower(S1[i]);
		}
		isFirstLetter = (S1[i] == ' ' ? true : false);
	}

	return S1;
}

string UpperAllString(string S1)
{

	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = toupper(S1[i]);

	}

	return S1;
}

string LowerAllString(string S1)
{

	for (short i = 0; i < S1.length(); i++)
	{

		S1[i] = tolower(S1[i]);

	}

	return S1;
}

char InvertCaseLetter(char C1)
{
	return	isupper(C1) ? tolower(C1) : toupper(C1);
}

string InvertCaseAllString(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{
		S1[i] = InvertCaseLetter(S1[i]);
	}
	return S1;
}

enum enWhatToCount { CapitalLetterCont = 0, SmallLetterCont = 1, All = 2 };

short CountLetters(string st, enWhatToCount WhatToCount = enWhatToCount::All)
{
	if (WhatToCount == enWhatToCount::All)
	{
		return st.length();
	}

	short Cont = 0;
	for (short i = 0; i < st.length(); i++)
	{
		if (WhatToCount == enWhatToCount::CapitalLetterCont && isupper(st[i]))
		{
			Cont++;
		}

		if (WhatToCount == enWhatToCount::SmallLetterCont && islower(st[i]))
		{
			Cont++;

		}
	}
	return Cont++;
}

short CountLetterInstring(string S1, char Letter)
{
	int Count = 0;

	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] == Letter)
		{
			Count++;
		}
	}

	return Count;
}

short CountLetter(string S1, char Letter, bool MatchCase = true)
{
	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (MatchCase)
		{
			if (S1[i] == Letter)
				Counter++;
		}
		else
		{
			if (tolower(S1[i]) == tolower(Letter))
				Counter++;
		}
	}

	return Counter;
}

bool isVowel(char Ch1)
{
	return ((tolower(Ch1) == 'a') || (tolower(Ch1) == 'o') || (tolower(Ch1) == 'u') || (tolower(Ch1) == 'e') || (tolower(Ch1) == 'i'));
}

int CountVowel(string S1)
{
	int Count = 0;

	for (int i = 0; i < S1.length(); i++)
	{
		if (isVowel(S1[i]))
		{
			Count++;
		}
	}

	return Count;
}

void PrintVowels(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{
		if (isVowel(S1[i]))
		{
			cout << S1[i] << "   ";
		}
	}
}

//void SpiltString(string S1)
//{
//	string Delimiter = " ";
//	int Pos = S1.find(Delimiter);
//	string sword;
//
//
//	while (Pos != string::npos)
//	{
//		sword = S1.substr(0, Pos);
//
//		if (sword != "")
//		{
//			cout << sword << endl;
//		}
//
//		S1.erase(0,Pos + Delimiter.length());
//
//		Pos = S1.find(Delimiter);
//	}
//
//	if (S1 != " ")
//	{
//		cout << S1 << endl;
//	}
//}

int CountWords(string S1)
{
	string Delimiter = " ";
	int Pos = S1.find(Delimiter);
	string sword;
	int Counter = 0;


	while (Pos != string::npos)
	{
		sword = S1.substr(0, Pos);

		if (sword != "")
		{
			Counter++;
		}

		S1.erase(0, Pos + Delimiter.length());

		Pos = S1.find(Delimiter);
	}

	if (S1 != " ")
	{
		Counter++;
	}

	return Counter;
}

vector <string> SplitString(string S1, string Delimiter = " ")
{
	int Pos = S1.find(Delimiter);
	string sword;
	vector <string> vString;

	while (Pos != string::npos)
	{
		sword = S1.substr(0, Pos);

		if (sword != "")
		{
			vString.push_back(sword);
		}

		S1.erase(0, Pos + Delimiter.length());

		Pos = S1.find(Delimiter);
	}

	if (S1 != " ")
	{
		vString.push_back(S1);
	}

	return	vString;
}

string TrimLeft(string S1)
{
	string TrimWord = " ";

	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(i, S1.length() - i);
		}
	}

	return "";
}

string TrimRight(string S1)
{
	for (int i = S1.length() - 1; i >= 0; i--)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(0, i + 1);
		}
	}

	return "";
}

string Trim(string S1)
{
	return TrimLeft(TrimRight(S1));
}

string JoinString(vector <string> vString, string Delim = " ")
{
	string WordAfterJoin = "";

	for (int i = 0; i < vString.size(); i++)
	{
		if (i != vString.size() - 1)
		{
			WordAfterJoin += vString[i] + Delim;
		}
		else
		{
			WordAfterJoin += vString[i];
		}
	}

	return WordAfterJoin;
}

string JoinString(string arrString[], short length, string Delim = " ")
{
	string WordAfterJoin = "";

	for (int i = 0; i < length; i++)
	{
		if (i != length - 1)
		{
			WordAfterJoin += arrString[i] + Delim;
		}
		else
		{
			WordAfterJoin += arrString[i];
		}
	}

	return WordAfterJoin;
}

string ReverseWordsInString(string S1)
{
	vector <string> vString = SplitString(S1, " ");
	string S2 = "";

	vector <string> vStringReversed;

	for (int i = vString.size() - 1; i >= 0; i--)
	{
		vStringReversed.push_back(vString[i]);
	}

	S2 = JoinString(vStringReversed);

	return S2;

}

string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sReplaceTo)
{
	int pos = S1.find(StringToReplace);

	while (pos != string::npos)
	{
		S1 = S1.replace(pos, StringToReplace.length(), sReplaceTo);

		pos = S1.find(StringToReplace);
	}

	return S1;
}

string ReplaceWordsInStringUsingSplit(string S1, string StringToReplace, string sReplaceTo, bool MatchCase = true)
{
	vector <string> vString = SplitString(S1);

	for (string& s : vString)
	{
		if (MatchCase)
		{
			if (s == StringToReplace)
			{
				s = sReplaceTo;
			}
		}
		else
		{
			if (LowerAllString(s) == LowerAllString(StringToReplace))
			{
				s = sReplaceTo;
			}
		}
	}

	return JoinString(vString);
}

string RemoveAllPunctuationsFromString(string S1)
{
	string S2 = "";

	for (int i = 0; i < S1.length(); i++)
	{
		if (!ispunct(S1[i]))
		{
			S2 += S1[i];
		}
	}

	return S2;
}

struct stClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	int AccountBalance;
};

stClient ReadNewClient()
{
	stClient Client;

	cout << "Enter Account Number? ";
	getline(cin, Client.AccountNumber);
	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);
	cout << "Enter Name? ";
	getline(cin, Client.Name);
	cout << "Enter Phone? ";
	getline(cin, Client.Phone);
	cout << "Enter AccountBalance? ";
	cin >> Client.AccountBalance;

	return Client;
}

string ConverRecordToLine(stClient Client, string Seperator = "#//#")
{
	string stClientRecord = "";


	stClientRecord += Client.AccountNumber + Seperator;
	stClientRecord += Client.PinCode + Seperator;
	stClientRecord += Client.Name + Seperator;
	stClientRecord += Client.Phone + Seperator;
	stClientRecord += to_string(Client.AccountBalance);

	return stClientRecord;
}

stClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
	stClient Client;
	vector<string> vClientData;

	vClientData = SplitString(Line, Seperator);

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);//cast string to double

	return Client;
}

void PrintClientRecord(stClient Client)
{
	cout << "\n\nThe following is the extracted client record:\n";
	cout << "\nAccout Number: " << Client.AccountNumber;
	cout << "\nPin Code : " << Client.PinCode;
	cout << "\nName : " << Client.Name;
	cout << "\nPhone : " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountBalance;
}

int main()
{
	//Practice after finish

	return 0;
}