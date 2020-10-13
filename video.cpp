#include "video.h"

Video :: Video(const string& call_number, const string& title, const string& subject, const string& description, const string& distributor, const string& note, const string& series, const string& label) : Media(call_number, title, subject, note), description(description), distributor(distributor), series(series), label(label)
{
    
}


void Video :: display()
{
    Media::display();
    cout << "Description:-      "<< description << endl;
    cout << "Distributor:-      "<< distributor << endl;
    cout << "Series:-           "<< series << endl;
    cout << "Label:-            "<< label << endl<<endl;
}


bool Video::compare_other(const string& ss)
{
  if(description.find(ss) != string::npos ||
     notes.find(ss)       != string::npos ||
     distributor.find(ss)        != string::npos ) 
    return true;
  else
    return false;
}