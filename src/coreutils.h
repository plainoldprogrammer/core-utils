/*
 *	Author:			Plainoldprogrammer
 *	Description:	Header file of the coreutils libreary.
 */

#ifndef CORE_UTILS
#define CORE_UTILS

#include <iostream>
#include <list>

namespace coreutils
{
    std::list<std::string> split_string(const std::string &);

    void print_string_list(const std::list<std::string> &);

    bool has_next(const std::list<std::string> &, const std::list<std::string>::const_iterator &);
}

#endif

