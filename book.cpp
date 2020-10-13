#include "book.h"

Book :: Book(const string& callnum,const string& title, const string& subject, const string& author, const string& descrip, const string& publisher, const string& city, const string& year, const string& series, const string& note) : Media(callnum,title,subject,note), author(author), description(descrip), publisher(publisher), city(city), year(year), series(series)
{

}


void Book :: display()
{
    Media::display();
    cout << "Author :-             "<< author << endl;
    cout << "Description :-        "<< description << endl;
    cout << "Publisher :-          "<< publisher << endl;
    cout << "City :-               "<< city << endl;
    cout << "Year :-               "<< year << endl;
    cout << "Series :-             "<< series << endl<<endl;
}


bool Book::compare_other(const string& ss)
{
  if(description.find(ss) != string::npos ||
     notes.find(ss)       != string::npos ||
     year.find(ss)        != string::npos ) //something like this
    return true;
  else
    return false;
}