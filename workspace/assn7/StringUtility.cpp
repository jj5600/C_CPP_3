//
//  StringUtility.cpp
//  CPP_X
//
//  Created by X on 8/12/25.
//
#include "StringUtility.h"
using namespace X;

// join accepts a reference to a string vector called Strings and a char: delim
// function returns a string that has each string in the vector seperated by delim

string StringUtility::join(const vector<string> &strings, char delim)
{
    string finalS;
    for(size_t i = 0; i < strings.size(); i++)
    {
        finalS += strings[i];
        if (i == strings.size()-1)
        {
            break;
        }
        finalS += delim;
    }

    return finalS;
}

vector<string> StringUtility::reverse(const vector<string> &strings)
{
    
    vector<string> finalSet;
    string temp;
    size_t sizes = strings.size();
    // start from last element in vector
    for(size_t zz = sizes+1; zz >0 ; zz--)
    {
        size_t stringSize = strings[zz-1].length();
        string swapper = strings[zz-1];
        for(int i = 0; i < stringSize/2; ++i)
        {
            std::swap(swapper[i],swapper[stringSize-i-1]);
        }
        finalSet.push_back(swapper);
        
    }
    return finalSet;
}


vector<string>
StringUtility::combine(const vector<string> &left, const vector<string> &right)
{
    vector<string> finalV;
    string temp;
    size_t lsize = left.size();
    size_t rsize = right.size();
    
    // start from last element in vector
    for(size_t Riter=0; Riter< rsize; Riter++)
    
    {   for(size_t Liter=0; Liter < lsize; Liter++)
        {
            temp=left[Liter];
            temp += right[Riter];
            finalV.push_back(temp);
        }
    }
    return finalV;
}

vector<string>
StringUtility::leftPad(const vector<string> &strings, char pad)
{
    vector<string> finalSet;
    string temp;
    size_t sizes = strings.size();
    // find the largest
    size_t largest_string = 0;
    // find the largest string first;
    for(size_t zz = sizes+1; zz >0 ; zz--)
    {
        if(strings[zz-1].length() > largest_string)
            largest_string = strings[zz-1].length();
    }

    for(size_t iter = 0; iter < sizes ; iter++)
    {
        temp = "";
        if(strings[iter].length() < largest_string)
        {
            for(int i=0; i < largest_string - strings[iter].length(); i++)
            {
                temp +="x";
            }
        }
            temp+=strings[iter];
            finalSet.push_back(temp);
    }
    return finalSet;
}
