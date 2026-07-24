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

bool FindClientByAccountNumber(vector <sClient> vClients,sClient & Client ,string AccountNumber)
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

int main()
{
	sClient stClient;
	string AccountNumber = ReadClientAccountNumber();
	vector <sClient> vClients = LoadDataFromFiles(ClientFileName);

	if (FindClientByAccountNumber(vClients, stClient, AccountNumber))
	{
		PrintClientRecord(stClient);
	}
	else
	{
		cout << "Client With Account Number (" << AccountNumber << ") Not Found!" << endl;
	}

	return 0;
}