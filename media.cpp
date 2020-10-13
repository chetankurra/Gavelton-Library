#include "media.h"
#include <algorithm>

Media :: Media(const string& call_num, const string& title, const string& subject, const string& note) : call_number(call_num), title(title), subjects(subject), notes(note)
{
  
}


bool Media :: compare_title(const string& ss)
{
    
    if(title.find(ss) != string::npos) 
        return true;
    else
        return false;
}


bool Media :: compare_call_number(const string& ss)
{
    if(call_number.find(ss) != string::npos) 
        return true;
    else
        return false;
}

bool Media :: compare_subjects(const string& ss)
{
    if(subjects.find(ss) != string::npos) 
        return true;
    else
        return false;
}


void Media::display()
{
  cout << "Call Number:-      " << call_number << endl;
  cout << "Title:-            " << title << endl;
  cout << "Subjects:-         " << subjects << endl;
  cout << "Notes:-            " << notes << endl;
}

Media :: ~Media()
{

}