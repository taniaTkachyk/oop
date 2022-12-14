#include "C:\Users\Тетяна\Downloads\Date.h"
#include <iostream>

using namespace std;

Date::Date(int d, int m, int y) {
    day =d;
    month = m;
    year = y;
}

Date::Date(){day=0;month=0;year=0;}

/*Date::Date(Date& date) {
    day = date.day;
    month = date.month;
    year = date.year;
}*/

int Date::get_day()  {return day;}
int Date::get_month()  {return month;}
int Date::get_year()  {return year;}

int Date::set_day(int d){day=d; return day;}
int Date::set_month(int m){month=m; return month;}
int Date::set_year(int y){year=y; return year;}

void Date::print(){
    cout<<day<<"."<<month<<"."<< year<<endl;
}

Date Date:: operator ++ (int i) {
    Date t(*this);
    day++;
    return t;
}
Date& Date :: operator ++ () { day++; return *this; }
Date Date:: operator -- (int i) {
    Date t(*this);
    day--;
    return t;
}
Date& Date :: operator -- () { day--; return *this; }
ostream& operator <<(ostream& out, Date& x) {
    return out << "Date:  " << x.get_day() << "." << x.get_month() <<"."<<x.get_year();
}
istream& operator >> (istream& in, Date& x) {
    return in >> x.day >> x.month >> x.year;
}
Date& Date :: operator = (Date& c) {
    if (this != &c) {
        day = c.day;
        month = c.month;
        year = c.year;
    }return *this;
}