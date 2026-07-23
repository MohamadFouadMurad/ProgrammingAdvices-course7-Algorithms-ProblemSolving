#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;
using namespace String;
const string ClientFileName = "Clients.txt";

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

string ConvertRecordToLine(sClient Clint, string Seperator)
{
	string stClintRecord = "";

	stClintRecord += Clint.AccountNumber + Seperator;
	stClintRecord += Clint.PinCode + Seperator;
	stClintRecord += Clint.Name + Seperator;
	stClintRecord += Clint.Phone + Seperator;
	stClintRecord += to_string(Clint.AccountBalance);

	return stClintRecord;
}

void AddDataLineToFile(string FileName, string stDataLine)
{
	fstream MyFile;

	MyFile.open(FileName , ios::out | ios::app );

	if (MyFile.is_open())
	{
		MyFile << stDataLine << endl;

		MyFile.close();
	}
}

void AddNewClinet()
{
	sClient Client;

	Client = ReadClintData();

	AddDataLineToFile(ClientFileName , ConvertRecordToLine(Client, "#//#"));
}

void AddClinet()
{
	char AddMore = 'Y';
	sClient Client;

	do
	{
		system("cls");
		cout << "Adding New Client:\n\n";

		AddNewClinet();

		cout << "\nClient Added successfully, do you want to add more client? Y/N?" << endl;
		cin >> AddMore;
	} while (toupper(AddMore) == 'Y');
}

int main()
{
	AddClinet();

	return 0;
}