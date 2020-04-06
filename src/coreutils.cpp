/*
 *	Author:			Plainoldprogrammer
 *	Description:	Implementation of thecoreutils library.
 */
 

#include "coreutils.h"

using namespace std;

void split_string()
{
	string s = "The cow is white";
	string delimiter = " ";
	string token;
	size_t pos = 0;

	while ((pos = s.find(delimiter)) != string::npos)
	{
		token = s.substr(0, pos);
		cout << token << endl;
		s.erase(0, pos + delimiter.length());
	}

	cout << s;
}

