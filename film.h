#ifndef FILM_H
#define FILM_H
#include<string>
#include<iostream>
#include "media.h"

using namespace std;

class Film : public Media {
private:
    string director;
    string year;

public:
    Film(const string& callnum, const string& title, const string& subject, const string& director, const string& note, const string& year);
    void display();
    bool compare_other(const string& ss);

};
#include "film.cpp"
#endif