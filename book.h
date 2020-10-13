#ifndef BOOK_H
#define BOOK_H
#include<string>
#include<iostream>
#include "media.h"

using namespace std;

class Book : public Media {   //Inherited from media class


public:
    Book(const string& callnum,const string& title, const string& subject, const string& author, const string& descrip, const string& publisher, const string& city, const string& year, const string& series, const string& note);
    void display();
    bool compare_other(const string& ss);

private:
    string author;
    string description;
    string publisher;
    string city;
    string year;
    string series;


};
#include "book.cpp"
#endif