#include "book.h"
#include "film.h"
#include "video.h"
#include "periodic.h"
#include<vector>
#include "search_engine.h"

int main(){

    Search_engine Library;

    vector<Media*> search_result;
    while(1)
    {
        cout<<"Types of searches available-"<<endl;
        cout<<"1) Search for TITLE"<<endl;
        cout<<"2) Search for CALL NUMBER"<<endl;
        cout<<"3) Search for SUBJECT"<<endl;
        cout<<"4) Search for OTHER THAN MENTIONED ABOVE"<<endl;
        cout<<"5) STOP SEARCH"<<endl<<endl;
        cout<<"Enter the respective number for type of search to be Done: ";



        int selection;
        int counter = 0;


        cin >> selection;
        string string_to_search;
        switch(selection){
            case 1: cout<<"Type something to search: ";

                    cin.ignore();
                    getline(cin,string_to_search);
                    search_result = Library.search_title(string_to_search);
                    break;
            case 2: cout<<"Type something to search: ";

                    cin.ignore();
                    getline(cin,string_to_search);
                    search_result = Library.search_call_num(string_to_search);
                    break;
            case 3: cout<<"Type something to search: ";
            
                    cin.ignore();
                    getline(cin,string_to_search);
                    search_result = Library.search_subjects(string_to_search);
                    break;
            case 4: cout<<"Type something to search: ";
                    cin.ignore();
                    getline(cin,string_to_search);
                    search_result = Library.search_other(string_to_search);
                    break;
            case 5: counter = 1;
                    break;
        }

        if(counter == 1)
            break;

        cout<<"The results based on the search performed are - "<<endl;

        if(search_result.size()==0)
            cout<<"No match is Found based on Search performed "<<endl;

        cout<<endl;
        for(unsigned i = 0; i<search_result.size(); i++)
        {
            search_result[i]->display();
        }

        search_result.clear();

    }

    return 0;
}