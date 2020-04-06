/*
 *	Author:			Plainoldprogrammer
 *	Description:	Basic test of the coreutils library.
 *
 */


#include <iostream>
#include "coreutils.h"

void split_string()
{
	std::cout << "local split_string()" << std::endl;
}

int main()
{
	std::cout << "It's working" << std::endl << std::endl;

	std::cout << "call to local split_string()" << std::endl;
	split_string();
	std::cout << std::endl;

	std::cout << "call to coreutils::split_string()" << std::endl;
	coreutils::split_string();
	std::cout << std::endl;

	return 0;
}

