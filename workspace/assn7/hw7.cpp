//
//  hw7.cpp
//  CPP_X
//
//  Created by X on 8/12/25.
//
#include "StringUtility.h"
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using namespace X;
int main()
{  
    StringUtility manipulate;
    vector<string> strings = {"The","quick","brown","fox","jumps","over","the","lazy","dog"};
    char delimiter = ',';
    vector<string> Jtemp = {"abc","def","ghi"};
    vector<string> R = {"ab","cd","ef"};
    vector<string> L = {"gh","ij","kl"};
    // demonstrating Join working properly
    cout << manipulate.join(strings,delimiter) << "\n";
    vector<string> Z2 = manipulate.reverse(strings);
    for(int i = 0; i < Z2.size(); i++)
    {
        cout << Z2[i] << " ";
        //cout << "\n";
    }
    cout << "\n";
    vector<string> left = {"Mr.","Mrs."};
    vector<string> right = {"Jones","Smith","Williams"};
    vector<string> tester = manipulate.combine(left,right);
    for(int i = 0; i < tester.size(); i++)
    {
        cout << tester[i] << " ";
        //cout << "\n";
    }
    cout << "\n";
    vector<string> tester1 = manipulate.leftPad(strings,'*');
    for(int i = 0; i < tester1.size(); i++)
    {
        cout << tester1[i] << " ";
    }
    cout << "\n";
    return 0;
}
