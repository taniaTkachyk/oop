#pragma once
#include <istream>
#include <ostream>
using namespace std;

class Date{
  protected:  
      int day, month, year;
public:
    Date();
    Date(int d, int m, int y);
   // Date( Date &date);
    ~Date() = default;

    int get_day() ;
    int get_month();
    int get_year();

    int set_day(int d);
    int set_month(int m);
    int set_year(int y);

    void print();

    Date operator ++ (int);
    Date& operator ++();
    Date operator -- (int);
    Date& operator --();
    Date& operator = (Date&);
    friend ostream& operator <<(ostream&, Date&);
    friend istream& operator >>(istream&, Date&);

};