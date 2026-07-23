#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"
#include <vector>

using namespace std;
using namespace String;

struct sClient
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	int AccountBalance = 0;
};

sClient ReadClintData()
{
	sClient data;

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

string ConvertRecordToLine(sClient Client , string Seperator)
{
	string stClintRecord = "";

	stClintRecord += Client.AccountNumber + Seperator;
	stClintRecord += Client.PinCode + Seperator;
	stClintRecord += Client.Name +Seperator;
	stClintRecord += Client.Phone + Seperator;
	stClintRecord += to_string(Client.AccountBalance);

	return stClintRecord;
}


int main()
{
	cout << "Please enter Client data : \n\n" << endl;

	sClient Client;

	Client = ReadClintData();

	cout << "\n\nClint Record for saving is : " << endl;
	cout << ConvertRecordToLine(Client, "#//#") << endl;
}