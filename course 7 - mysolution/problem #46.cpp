#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"
#include <vector>
#include <iomanip>

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

sClient ConvertLineToRecord(string stLine, string Seperator)
{
	vector <string> vClientData = SplitString(stLine, Seperator);

	sClient Client;

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);
	
	return Client;
}

void PrintClientRecord(sClient Client)
{
	cout << "The following is the extracted client record: " << endl << endl;

	cout << left << setw(15) << "Account Number" << ": " << Client.AccountNumber << endl;
	cout << left << setw(15) << "Pin Code" << ": " << Client.PinCode << endl;
	cout << left << setw(15) << "Name" << ": " << Client.Name << endl;
	cout << left << setw(15) << "Phone" << ": " << Client.Phone << endl;
	cout << left << setw(15) << "Account Balance" << ": " << Client.AccountBalance << endl;
}

int main()
{
	string stLine = "A150#//#1234#//#Mohamad fouad#//#079999#//#5270.000000";
	string Seperator = "#//#";
	cout << "Line Record is : \n";
	cout << stLine << endl << endl;
	

	sClient Client = ConvertLineToRecord(stLine , Seperator);

	PrintClientRecord(Client);

	return 0;
}