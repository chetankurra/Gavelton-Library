#ifndef VIDEO_H
#define VIDEO_H
#include<string>
#include<iostream>
#include "media.h"

using namespace std;

class Video : public Media {
    
private:
    string description;
    string distributor;
    string series;
    string label;

public:
    Video(const string& call_number, const string& title, const string& subject, const string& description, const string& distributor, const string& note, const string& series, const string& label);
    void display();
    bool compare_other(const string& ss);

};
#include "video.cpp"
#endif