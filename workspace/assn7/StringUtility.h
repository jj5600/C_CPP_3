//
//  StringUtility.h
//  CPP_X
//
//  Created by X on 8/12/25.
//

#ifndef STRINGUTILITY_H
#define STRINGUTILITY_H
#include <iostream>
using std::cout;
#include <string>
using std::string;
#include <vector>
using std::vector;
namespace X{
class StringUtility{   
public:
    // each of the fucntion declarations specified in UML
    string join(const vector<string> &strings, char delim);
    vector<string> reverse(const vector<string> &strings);
    vector<string> combine(const vector<string> &left, const vector<string> &right);
    vector<string> leftPad(const vector<string> &strings, char pad);
};
}
#endif
