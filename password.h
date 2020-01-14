/*
 * password.h
 */

#ifndef __PASSWORD_H__
#define __PASSWORD_H__

using namespace std;

class Password {

	public:
		// constructor
		explicit Password(int index = 10);

		// destructor
		~Password();

		// copy constructor
		Password(const Password& pass);

		// copy assignment
		Password& operator=(const Password& rhs);

		friend ostream& operator<<(ostream& os, const Password& pass);
	
	private:

		string pass_str;

};

#endif		
