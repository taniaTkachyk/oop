#include "C:\Users\Тетяна\Downloads\Parcel.h"
#include "C:\Users\Тетяна\Downloads\Date.h"
#include <iostream>
#include <string>

using namespace std;

Parcel::Parcel(){
    weight = 0;
    volume = 0;
    Date f (1,1,2022), s(5,2,2022) ;
    sending_date = f;
    receiving_date = s;
    price = 0;
    origin=0;
    destination = 0;
    id = 0;
    premium = 0;
    sender = "";
    recipient = "";
}

Parcel::Parcel(int weight, int volume, Date& sending_date, Date& receiving_date, int price, int origin, int destination, int id, bool premium, string& sender, string& recipient) {
    weight = weight;
    volume = volume;
    sending_date = sending_date;
    receiving_date = receiving_date;
    price = price;
    origin=origin;
    destination = destination;
    id = id;
    premium = premium;
    sender=sender;
    recipient = recipient;
}

Parcel::Parcel( Parcel &parcel){
    weight = parcel.weight;
    volume = parcel.volume;
    sending_date = parcel.sending_date;
    receiving_date = parcel.receiving_date;
    price = parcel.price;
    origin= parcel.origin;
    destination = parcel.destination;
    id = parcel.id;
    premium = parcel.premium;
    sender= parcel.sender;
    recipient = parcel.recipient;
}


int Parcel::get_weight()  {return weight;}
int Parcel::get_volume()  {return volume;}
Date Parcel::get_sending_date()  {return sending_date;}
Date Parcel::get_receiving_date()  {return receiving_date;}
int Parcel::get_price()  {return price;}
int Parcel::get_origin()  {return origin;}
int Parcel::get_destination()  {return destination;}
int Parcel::get_id()  {return id;}
bool Parcel::get_premium()  {return premium;}
string Parcel::get_sender()  {return sender;}
string Parcel::get_recipient()  {return recipient;}

int Parcel::set_weight(int new_weight){weight =new_weight; return weight;}
int Parcel::set_volume(int new_volume){volume=new_volume; return volume;}
Date Parcel::set_sending_date(Date &new_sending_date){sending_date=new_sending_date; return sending_date;}
Date Parcel::set_receiving_date(Date &new_receiving_date){receiving_date=new_receiving_date; return receiving_date;}
int Parcel::set_price(int new_price){price=new_price; return price;}
int Parcel::set_origin(int new_origin){origin=new_origin; return origin;}
int Parcel::set_destination(int new_destination){destination=new_destination; return destination;}
int Parcel::set_id(int new_id){id=new_id; return id;}
bool Parcel::set_premium(bool new_premium){premium=new_premium; return premium;}
string Parcel::set_sender(string &new_sender){sender=new_sender; return sender;}
string Parcel::set_recipient(string &new_recipient){recipient=new_recipient; return recipient;}

void Parcel::print(){
    cout<<"Parcel #"<<id<<endl;
    cout<<"sender: "<<sender<<endl;
    cout<<"recipient: "<<recipient<<endl;
    cout<<"origin: "<<origin<<endl;
    cout<<"destination: "<<destination<<endl;
    cout<<"price: "<<price<<endl;
    cout<<"premium: "<<premium<<endl;
    cout<<"sending date: ";
    sending_date.print();
    cout<<"receiving date: ";
    receiving_date.print();
    cout<<"weight: "<<weight<<endl;
    cout<<"volume: "<<volume<<endl;
    cout<<endl;
}

Parcel Parcel:: operator + (Parcel& c) {
    Parcel t(*this);
    t.weight = t.weight + c.weight;
    t.volume = t.volume + c.volume;
    t.price = t.price + c.price;
    return t;
}
int Parcel:: operator < (Parcel& c) {   //за вагою та об'ємом
    return ((weight < c.weight) && (volume < c.volume));
}
int Parcel:: operator > (Parcel& c) {   //за вагою та об'ємом
    return ((weight > c.weight) && (volume > c.volume));
}
int Parcel:: operator == (Parcel& c) {           //за вагою,об'ємом, ціною, початковим та кінцевим відділенням
    int k = ((weight == c.weight) && (volume == c.volume) && (price == c.price) && (origin == c.origin) && (destination == c.destination));
    return k;
}
int Parcel:: operator != (Parcel& c) {
    int k = ((weight != c.weight) && (volume != c.volume) && (price != c.price) && (origin != c.origin) && (destination != c.destination));
    return k;
}
Parcel& Parcel:: operator = (Parcel& c) {
    if (this != &c) {
        weight = c.weight;
        volume = c.volume;
        price = c.price;
        origin = c.origin;
        destination = c.destination;
        id = c.id;
        premium = c.premium;
       /* delete[] sender;
        int l = strlen(c.sender) + 1;
        name = new char[l]; strcpy_s(sender, l, c.sender);
        delete[] recipient;
        int k = strlen(c.recipient) + 1;
        name = new char[k]; strcpy_s(recipient, k, c.recipient);*/
        sender = c.sender;
        recipient = c.recipient;
        sending_date = c.sending_date;
        receiving_date = c.receiving_date;
    }return *this;
    }
