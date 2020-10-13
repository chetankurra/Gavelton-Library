#include "film.h"

Film :: Film(const string& callnum, const string& title, const string& subject, const string& director, const string& note, const string& year) : Media(callnum, title, subject, note), director(director), year(year) 
{

}


void Film :: display()
{
    Media::display();
    cout << "director:           "<< director << endl;
    cout << "Year:               "<< year << endl<<endl;
}



bool Film::compare_other(const string& ss)
{
  if(director.find(ss) != string::npos ||
     notes.find(ss)       != string::npos ||
     year.find(ss)        != string::npos ) //something like this
    return true;
  else
    return false;
}