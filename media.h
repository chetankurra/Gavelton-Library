#ifndef MEDIA_H
#define MEDIA_H
#include<string>
#include<iostream>

using namespace std;

class Media {
  
    protected:
    string call_number;
    string title;
    string subjects;
    string notes;


  public:

    Media(const string& call_num, const string& title, const string& subject, const string& note);
    virtual bool compare_other(const string & ss)=0; 
    virtual void display()=0;
    virtual ~Media();


    bool compare_title(const string & ss);
    bool compare_call_number(const string & ss);
    bool compare_subjects(const string & ss);

};


#include "media.cpp"
#endif