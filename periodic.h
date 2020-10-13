#ifndef PERIODIC_H
#define PERIODIC_H
#include<string>
#include<iostream>
#include "media.h"

using namespace std;

class Periodic : public Media {
private:
    string author;
    string description;
    string publisher;
    string publishing_history;
    string series;
    string related_titles;
    string other_forms_of_title;
    string govt_doc_number;

public:
    Periodic(const string& call_numb, const string& tle, const string& sub, const string& auth, const string& des, const string& pub, const string& pub_his, const string& ser, const string& note, const string& rel_ttl, const string& ofottl, const string& govt);
    void display();
    bool compare_other(const string& ss);

};
#include "periodic.cpp"
#endif