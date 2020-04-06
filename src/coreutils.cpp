/*
 *	Author:			Plainoldprogrammer
 *	Description:	Implementation of thecoreutils library.
 */
 

#include "coreutils.h"

using namespace std;

namespace coreutils
{
	list<string> split_string(const string &original)
	{
		string s(original);
		list<string> words;

		string delimiter = " ";
		string token;
		size_t pos = 0;
	
		while ((pos = s.find(delimiter)) != string::npos)
		{
			token = s.substr(0, pos);
			words.push_back(token);
			s.erase(0, pos + delimiter.length());
		}
	
		words.push_back(s);

		return words;
	}

	void print_string_list(const list<string> & originalList)
	{
		list<string>::const_iterator it = originalList.begin();
		while (it != originalList.end())
		{
			cout << *it << "\t";
			it++;
		}
		
		cout << endl;
	}
}

