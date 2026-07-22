#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"
#include <vector>

using namespace std;
using namespace String;

struct sClint
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	int AccountBalance = 0;
};

sClint ReadClintData()
{
	sClint data;

	cout << "enter Account Number? ";
	getline(cin >> ws, data.AccountNumber);

	cout << "enter Pincode? ";
	getline(cin, data.PinCode);

	cout << "enter Name?";
	getline(cin, data.Name);

	cout << "enter phone?";
	getline(cin, data.Phone);

	cout << "enter Accountbalance?";
	cin >> data.AccountBalance;

	return data;
}


string ConvertRecordToLine(sClint Clint , string Seperator)
{
	string stClintRecord = "";

	stClintRecord += Clint.AccountNumber + Seperator;
	stClintRecord += Clint.PinCode + Seperator;
	stClintRecord += Clint.Name +Seperator;
	stClintRecord += Clint.Phone + Seperator;
	stClintRecord += to_string(Clint.AccountBalance);

	return stClintRecord;
}


int main()
{
	cout << "Please enter Client data : \n\n" << endl;

	sClint Clint;

	Clint = ReadClintData();

	cout << "\n\nClint Record for saving is : " << endl;
	cout << ConvertRecordToLine(Clint, "#//#") << endl;
}