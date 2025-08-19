
//  Person.h
//  CSE-40477 Summer 2025
//  Instructor: Raymond Mitchell III
//  Homework #8
//  Name: X
//  Date: 8/18/25
//

#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <iomanip>
#include <string>
using std::cout;
using std::ostream;
using namespace std;
namespace X
{
class Person{
    friend ostream &operator<<(ostream &out, const Person &person);
    friend istream &operator>>(istream &in, Person &person);
public:
    
private:
    std::string firstName;
    std::string lastName;
    int ageYears;
    float heightInches;
    float weightPounds;
};

ostream &operator<<(ostream &out, const Person &person)
{
    out << person.firstName << " "<< person.lastName<< " "<<person.ageYears<< " " << person.heightInches<< " "  << person.weightPounds <<"\n";
    return out;
}

istream &operator>>(istream &in, Person &person)
{
    in >> person.firstName >> person.lastName >> person.ageYears >> person.heightInches >> person.weightPounds;
    return in;
}

}

#endif /* Person_h */
