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

sClient ConvertLineToRecord(string stLine, string Seperator)
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

		while (getline(Myfile,line))
		{
			Client = ConvertLineToRecord(line, "#//#");

			vClients.push_back(Client);
		}

		Myfile.close();
	}

	return vClients;
}

void PrintClientRecord(sClient Client)
{
	cout << "| ";
	SetWidthInCenter(15, Client.AccountNumber);
	cout << "| ";
	SetWidthInCenter(10, Client.PinCode);
	cout << "| ";
	SetWidthInCenter(40, Client.Name);
	cout << "| ";
	SetWidthInCenter(12, Client.Phone);
	cout << "| ";
	SetWidthInCenter(15, to_string(Client.AccountBalance));
}

void PrintAllClientsData(vector <sClient> vClients)
{
	cout << "\n" << Taps(4) << "Clients List (" << vClients.size() << ") Client(s).";

	cout <<"\n_______________________________________________________";
	cout << "_________________________________________________\n" << endl;
	cout << "| ";
	SetWidthInCenter(15, "AccountNumber");
	cout << "| ";
	SetWidthInCenter(10, "PinCode");
	cout << "| ";
	SetWidthInCenter(40, "ClientName");
	cout << "| ";
	SetWidthInCenter(12, "Phone");
	cout << "| ";
	SetWidthInCenter(15, "Balance");
	cout << "\n_______________________________________________________";
	cout << "_________________________________________________\n" << endl;


	for (sClient Client : vClients)
	{
		PrintClientRecord(Client);
		cout << endl;
	}


	cout << "\n_______________________________________________________";
	cout << "_________________________________________________\n" << endl;
}

int main()
{
	vector <sClient> vClients = LoadDataFromFiles(ClientFileName);
	PrintAllClientsData(vClients);

	return 0;
}