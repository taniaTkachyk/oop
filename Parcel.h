#pragma once
#include "./Date.h"
#include <string>

using namespace std;

class Parcel{
protected: 
    int weight;
    int volume;
    Date sending_date;
    Date receiving_date;
    int price;
    int origin;
    int destination;
    int id;
    bool premium;
    string sender;
    string recipient;
public:
    Parcel();
    Parcel(int weight, int volume,  Date &sending_date,  Date &receiving_date, int price, int origin, int destination, int id, bool premium, string &sender, string &recipient);
    Parcel(  Parcel &parcel);
    ~Parcel()=default;

    int get_weight() ;
    int get_volume() ;
    Date get_sending_date() ;
    Date get_receiving_date() ;
    int get_price() ;
    int get_origin() ;
    int get_destination() ;
    int get_id() ;
    bool get_premium() ;
    string get_sender() ;
    string get_recipient() ;

    int set_weight(int new_weight);
    int set_volume(int new_volume);
    Date set_sending_date(Date &new_sending_date);
    Date set_receiving_date(Date &new_receiving_date);
    int set_price(int new_price);
    int set_origin(int new_origin);
    int set_destination(int new_destination);
    int set_id(int new_id);
    bool set_premium(bool new_premium);
    string set_sender(string &new_sender);
    string set_recipient(string &new_recipient);

    void print();

    Parcel operator + (Parcel&);
    int operator < (Parcel&);
    int operator > (Parcel&);
    int operator == (Parcel&);
    int operator != (Parcel&);
    Parcel& operator = (Parcel&);
    
    

};