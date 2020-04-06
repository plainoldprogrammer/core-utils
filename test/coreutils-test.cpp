/*
 *	Author:			Plainoldprogrammer
 *	Description:	Basic test of the coreutils library.
 *
 */


#include <iostream>
#include "coreutils.h"

int main()
{
	std::cout << "It's working" << std::endl << std::endl;

	std::string str = "This is a simple example";
	std::cout << "str after its declaration is: " << str << std::endl << std::endl;

	std::cout << "call to coreutils::split_string()" << std::endl;
	coreutils::split_string(str);
	std::cout << std::endl << std::endl;

	std::cout << "str after the call to split_string() is: " << str;
	std::cout << std::endl;

	return 0;
}

