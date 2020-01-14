#include <iostream>
#include <cstdlib>
#include <ctime>
#include "password.h"

using namespace std;

Password::Password(int index)
{
	string lowercase_letters = "abcdefghijklmnopqrstuvwxyz";
	string uppercase_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string special_chars = "!#$%&'()*+,-./:;<=>?@[]^_`{|}~";
	string numbers = "0123456789";
	
	srand(time(NULL));
	int cat1, cat2;
	for (int i = 0; i < index; i++) {
		cat1 = rand() % 4;
		if (cat1 == 0) {
			cat2 = rand() % 26;
			pass_str+=lowercase_letters[cat2];
		} else if (cat1 == 1) {
			cat2 = rand() % 26;
			pass_str+=uppercase_letters[cat2];
		} else if (cat1 == 2) {
			cat2 = rand() % 30;
			pass_str+=special_chars[cat2];
		} else {
			cat2 = rand() % 10;
			pass_str+=numbers[cat2];
		}
	}
		
}

Password::~Password()
{
	;
}

ostream& operator<<(ostream& os, const Password& pass)
{	
	os << pass.pass_str;
	return os;
}

