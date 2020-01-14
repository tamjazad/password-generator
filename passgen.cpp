#include <iostream>
#include "password.h"

using namespace std;

int main()
{
	cout << "How long would you like your password to be? Length: ";
	int length;
	cin >> length;
	Password pass(length);
	cout << "New password: " << pass << endl;
	return 0;
}
