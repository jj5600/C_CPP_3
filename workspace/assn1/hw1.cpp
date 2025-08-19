// CSE-40477 Summer 2025
// Instructor: Raymond Mitchell III
// Homework #1: Class Date
// Name: X
// Date: 6/29/25
//
#include <iostream>
// To avoid magic number usage constant expressions are used
constexpr int JANUARY = 1;
constexpr int DECEMBER = 12;
// used late for testing
constexpr int OUTOFBOUNDS_MONTH_13 = 13;
constexpr int RANDOM_DAY_23 =23;
constexpr int RANDOM_YEAR_1999 = 1999;
constexpr int GOLDEN_DAY = 6;
constexpr int GOLDEN_MONTH = 5;
constexpr int GOLDEN_YEAR = 2000;
using namespace std;
class date{
// private by default
 int month;
 int day;
 int year;
public:
 // constructor
 date(int month, int day, int year)
 {
   this->day = day;
 // logic for ensuring that month is valid else set month to 1 and cerr
   if (month >= JANUARY && month <= DECEMBER)
   this->month = month;
   else
   {
     this->month = JANUARY;
     cerr << "Attempt to set an invalid month value\n";
   }
   this->year = year;
 
 }
 // specifics for handling outof bounds months
 void setMonth(int month)
 {
 if (month >= JANUARY && month <= DECEMBER)
 this->month = month;
 else
 {
   this->month = JANUARY;
   cerr << "Attempt to set an invalid month value\n";
 }
 }
 
 int getMonth(){return month;}
 void setDay(int day){this->day = day;}
 int getDay(){return day;}
 void setYear(int year){this->year = year;}
 int getYear(){return year;}
 void display(){ cout << month << "/" << day << "/" << year << "\n";}
};
int main(int argc, const char * argv[])
{
 //Simple test program
 //test constructor testing for out of bounds input (month) + display
 date x(OUTOFBOUNDS_MONTH_13, RANDOM_DAY_23, RANDOM_YEAR_1999);
 cout << "Expected:" << JANUARY << "/" << RANDOM_DAY_23 << "/"
 << RANDOM_YEAR_1999 << "actual: ";
 x.display();
 // test all set and get functionality and compare expected vs actual
 x.setDay(GOLDEN_DAY);
 if(x.getDay()!= GOLDEN_DAY)
 cout << "[ERROR]issue with setDay / getDay!\n";
 x.setMonth(OUTOFBOUNDS_MONTH_13);
 if(x.getMonth()!= JANUARY)
 cout << "[ERROR]issue with bounds checking on months";
 x.setMonth(GOLDEN_MONTH);
 if (x.getMonth()!= GOLDEN_MONTH)
 cout << "[ERROR]issue with setMonth / getMonth!\n";
 x.setYear(GOLDEN_YEAR);
 if (x.getYear()!= GOLDEN_YEAR)
 cout << "[ERROR]issue with getYear / setYear!";
 cout << "Expected:" << GOLDEN_MONTH << "/" << GOLDEN_DAY << "/"
 << GOLDEN_YEAR << "actual: ";
 // final display test
 x.display();
 return 0;
}
Out
