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

	void print_string_list(const list<string> &original_list)
	{
		int i = 0;

		list<string>::const_iterator it = original_list.begin();
		while (it != original_list.end())
		{
			cout << "[" << i++ << "]:" << *it;

			if (has_next(original_list, it))
			{
				cout << " -> ";
			}
			it++;
		}
		
		cout << endl;
	}

	bool has_next(const list<string> &original_list, const list<string>::const_iterator &original_iterator)
	{
		bool has_next_element = false;
		list<string>::const_iterator it = original_iterator;

		it++;
		if (!(it == original_list.end()))
		{
			has_next_element = true;
		}

		return has_next_element;
	}
}

