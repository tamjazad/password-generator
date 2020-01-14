/*
 * password.h
 */

#ifndef __PASSWORD_H__
#define __PASSWORD_H__

using namespace std;

class Password {

	public:
		// constructor
		Password();

		// destructor
		~Password();

		// copy constructor
		Password(const Password& pass);

		// copy assignment
		Password& operator=(const Password& rhs);
	
	private:

		string pass_str;
		string possible_chars;

};

#endif		
