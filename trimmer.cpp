#include "func.h"

string _trim(const string& str)
{
    size_t start = str.find_first_not_of(" \n\r\t");
    size_t until = str.find_last_not_of(" \n\r\t");
    string::const_iterator i = start==string::npos ? str.begin() : str.begin() + start;
    string::const_iterator x = until==string::npos ? str.end()   : str.begin() + until+1;
    return string(i,x);
}