#include <iostream>
#include <fstream>
#include <string>
#include "password.h"

using namespace std;

int main()
{
	cout << "How long would you like your password to be? Length: ";
	int length;
	cin >> length;
	Password pass(length);
	cout << "New password: " << pass << endl;
	
	cout << "Would you like to save this password? (y/n): ";
	string choice;
	cin >> choice;

	if (choice == "y") {
		cout << "What is this password for? Account/service: ";
		string account;
		cin >> account;
		ofstream passfile;
		passfile.open("passwords.txt", ios::app);
		if (passfile.is_open())
		{
			passfile << "Password for " << account << ": " << endl;
			passfile << pass << endl << endl;
			cout << "Saved to 'passwords.txt'" << endl;
			passfile.close();
		} else
			cout << "Unable to save password to 'passwords.txt'" << endl;

	}
	return 0;
}
