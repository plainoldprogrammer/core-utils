/*
 *	Author:			Plainoldprogrammer
 *	Description:	Basic test of the coreutils library.
 *
 */


#include <iostream>
#include "coreutils.h"

int main()
{
	system("cls");

	std::string str = "This is a simple example";

	std::cout << "str after its declaration: " << std::endl << str << std::endl << std::endl;

	std::cout << "call to coreutils::split_string()" << std::endl;
	std::list<std::string> splitted_str = coreutils::split_string(str);
	std::cout << std::endl;

	std::cout << "call to coreutils::print_string_list(): " << std::endl;
	coreutils::print_string_list(splitted_str);
	std::cout << std::endl;

	std::cout << "str after the call to split_string(): " << std::endl << str << std::endl;

	return 0;
}

