#include <iostream>
#include <string>
#include <cctype>
#include "MyHeader/MyMathFunction.h"
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;
using namespace String;
using namespace myfunc;
using namespace OutPut;
const string ClientFileName = "Clients.txt";


struct sClient
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	int AccountBalance = 0;
};

string ReadClientAccountNumber()
{
	string AccountNumber = "";
	cout << "Please enter AccountNumber?";
	cin >> AccountNumber;
	return AccountNumber;
}

sClient ConvertLineToRecord(string stLine, string Seperator = "#//#")
{
	vector <string> vClientData = SplitString(stLine, Seperator);

	sClient Client;

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stoi(vClientData[4]);

	return Client;
}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{
	string stClintRecord = "";

	stClintRecord += Client.AccountNumber + Seperator;
	stClintRecord += Client.PinCode + Seperator;
	stClintRecord += Client.Name + Seperator;
	stClintRecord += Client.Phone + Seperator;
	stClintRecord += to_string(Client.AccountBalance);

	return stClintRecord;
}

void SaveClientsDataToFile(string FileName, vector <sClient> vClients)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out);

	if (MyFile.is_open())
	{
		for (sClient C : vClients)
		{
			string DataLine = ConvertRecordToLine(C, "#//#");
			MyFile << DataLine << endl;
		}
		MyFile.close();
	}
}

vector <sClient> LoadDataFromFiles(string FileName)
{
	vector <sClient> vClients;
	fstream Myfile;
	Myfile.open(FileName, ios::in);
	if (Myfile.is_open())
	{
		string line;
		sClient Client;

		while (getline(Myfile, line))
		{
			Client = ConvertLineToRecord(line, "#//#");

			vClients.push_back(Client);
		}

		Myfile.close();
	}

	return vClients;
}

bool FindClientByAccountNumber(vector <sClient>& vClients, sClient& Client, string AccountNumber)
{
	for (int i = 0; i < vClients.size(); i++)
	{
		if (AccountNumber == vClients[i].AccountNumber)
		{
			Client = vClients[i];
			return true;
		}
	}

	return false;
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

sClient ChangeClientRecord(string AccountNumber)
{
	sClient Client;

	Client.AccountNumber = AccountNumber;

	cout << "enter Pincode? ";
	getline(cin >> ws, Client.PinCode);

	cout << "enter Name?";
	getline(cin, Client.Name);

	cout << "enter phone?";
	getline(cin, Client.Phone);

	cout << "enter Accountbalance?";
	cin >> Client.AccountBalance;

	return Client;
}

void UpdateClientDataByAccountNumber(vector <sClient>& vClients, string AccountNumber)
{
	sClient stClient;
	char Answer = 'n';

	if (FindClientByAccountNumber(vClients, stClient, AccountNumber))
	{
		PrintClientRecord(stClient);
		cout << "Are you sure do you want to Update? Y/N?";
		cin >> Answer;

		if ('Y' == toupper(Answer))
		{
			for (sClient& C : vClients)
			{
				if (C.AccountNumber == AccountNumber)
				{
					cout << endl;
					C = ChangeClientRecord(AccountNumber);
					cout << "\nClient Update Successfully." << endl;
					break;
				}
			}

			SaveClientsDataToFile(ClientFileName, vClients);
		}
	}
	else
	{
		cout << "Client With Account Number (" << AccountNumber << ") Not Found!" << endl;
	}
}

int main()
{
	string AccountNumber = ReadClientAccountNumber();
	vector <sClient> vClients = LoadDataFromFiles(ClientFileName);

	UpdateClientDataByAccountNumber(vClients, AccountNumber);

	return 0;
}