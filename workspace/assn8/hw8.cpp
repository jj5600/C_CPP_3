//  hw8.cpp
//  CSE-40477 Summer 2025
//  Instructor: Raymond Mitchell III
//  Homework #8
//  Name: X
//  Date: 8/18/25
#include "Person.h"
#include <fstream>
using std::ifstream;
using namespace X;

int main()
{
    Person J;
    ifstream in("hw8-input.txt",ios::in);
    // check for file open error
    if (!in)
    {
        cerr<< "ERROR opening file\n";
        exit(1);
    }
    // read in input until EOF is detected.
    while(in >> J)
    {
        cout << J;
    }
    return 0;
}
