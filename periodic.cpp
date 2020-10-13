#include "periodic.h"

Periodic :: Periodic(const string& call_numb, const string& tle, const string& sub, const string& auth, const string& des, const string& pub, const string& pub_his, const string& ser, const string& note, const string& rel_ttl, const string& ofottl, const string& govt) : Media(call_numb, tle, sub, note), author(auth), description(des), publisher(pub), publishing_history(pub_his), series(ser), related_titles(rel_ttl), other_forms_of_title(ofottl), govt_doc_number(govt) 
{
   
}


void Periodic :: display()
{
    Media::display();
    cout << "Author:             " << author << endl;
    cout << "Title:              " << description << endl;
    cout << "Subjects:           " << publisher << endl;
    cout << "Notes:              " << publishing_history << endl;
    cout << "Call Number:        " << series << endl;
    cout << "Title:              " << related_titles << endl;
    cout << "Subjects:           " << other_forms_of_title << endl;
    cout << "Notes:              " << govt_doc_number << endl<<endl;

}


bool Periodic::compare_other(const string& ss)
{
  if(description.find(ss) != string::npos ||
     notes.find(ss)       != string::npos ||
     related_titles.find(ss)       != string::npos ||
     series.find(ss)        != string::npos ) //something like this
     return true;
  else
    return false;
}
