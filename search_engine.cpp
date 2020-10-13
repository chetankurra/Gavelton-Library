#include "search_engine.h"

vector<string> split( string s , char delimiter )
{
    vector<string> tokens;          // vector of tokens
    string token;                   // a single token
    istringstream tokenStream(s);   // an input string stream
    // Tokenize s by grabbing individual tokens
    while( getline( tokenStream , token , delimiter ) )
        tokens.push_back(token);    // add found token
    return tokens;
}



const vector<Media*> Search_engine :: search_title(string str)
{
    vector<Media*> search_result;
    for(unsigned x=0; x<card_catalogue.size(); x++)
    {
        if(card_catalogue[x]->compare_title(str) == true)
        {
            search_result.push_back(card_catalogue[x]);
        }
    }
    return search_result;
}


const vector<Media*> Search_engine :: search_subjects(string str)
{
    vector<Media*> search_result;
    for(unsigned x=0; x<card_catalogue.size(); x++)
    {
        if(card_catalogue[x]->compare_subjects(str) == true)
        {
            search_result.push_back(card_catalogue[x]);
        }
    }
    return search_result;

}
        
const vector<Media*> Search_engine :: search_other(string str)
{
    vector<Media*> search_result;
    for(unsigned x=0; x<card_catalogue.size(); x++)
    {
        if(card_catalogue[x]->compare_other(str) == true)
        {
            search_result.push_back(card_catalogue[x]);
        }
    }
    return search_result;

}

const vector<Media*> Search_engine :: search_call_num(string str)
{
    vector<Media*> search_result;
    for(unsigned x=0; x<card_catalogue.size(); x++)
    {
        if(card_catalogue[x]->compare_call_number(str) == true)
        {
            search_result.push_back(card_catalogue[x]);
        }
    }
    return search_result;

}


Search_engine :: ~Search_engine()
{
    for(unsigned x=0; x<card_catalogue.size(); x++)
    {
        delete card_catalogue[x];
    }
}

Search_engine :: Search_engine()
{
    ifstream file_input_reader;
    vector<string> split_vector;
    string input;
    char delimiter_pipe = '|';
    string txt = "book.txt";
    file_input_reader.open(txt);
    if(file_input_reader.is_open())
    {
        while(getline(file_input_reader, input))
        {
            split_vector = split(input, delimiter_pipe);

        
            string call_number = "";
            string title = "";
            string subjects = "";
            string author = "";
            string description = "";
            string publisher = "";
            string city = "";
            string year = "";
            string series = "";
            string notes = "";

                for(unsigned x = 0; x<split_vector.size(); x++)
                {
                    if(x==0)
                        call_number = split_vector[x];
                    else if(x==1)
                        title = split_vector[x];
                    else if(x==2)
                        subjects = split_vector[x];
                    else if(x==3)
                        author = split_vector[x];
                    else if(x==4)
                        description = split_vector[x];
                    else if(x==5)
                        publisher = split_vector[x];
                    else if(x==6)
                        city = split_vector[x];
                    else if(x==7)
                        year = split_vector[x];
                    else if(x==8)
                        series = split_vector[x];
                    else if(x==9)
                        notes = split_vector[x];
                }
                              
                Book* book_obj = new Book(call_number, title, subjects, author, description, publisher, city, year, series, notes);
                card_catalogue.push_back(book_obj);
                split_vector.clear();
        }
        file_input_reader.close();
    }
    else{
        cout<<"Error in opening file";
    }


    txt = "film.txt";
    file_input_reader.open(txt);
    if(file_input_reader.is_open())
    { 
        while(getline(file_input_reader, input))
        {
            split_vector = split(input, delimiter_pipe);
            string call_number = "";
            string title = "";
            string subjects = "";
            string director = "";
            string notes = "";
            string year = "";


                for(unsigned x = 0; x<split_vector.size(); x++)
                {
                    if(x==0)
                        call_number = split_vector[x];
                    else if(x==1)
                        title = split_vector[x];
                    else if(x==2)
                        subjects = split_vector[x];
                    else if(x==3)
                        director = split_vector[x];
                    else if(x==4)
                        notes = split_vector[x];
                    else if(x==5)
                        year = split_vector[x];
                }
                              
                Film* file_obj = new Film(call_number, title, subjects, director, notes, year);
                card_catalogue.push_back(file_obj);
                split_vector.clear();
        }
        file_input_reader.close();
    }
    else{
        cout<<"Error in opening file";
    }


    txt = "video.txt";
    file_input_reader.open(txt);
    if(file_input_reader.is_open())
    {
        while(getline(file_input_reader, input))
        {
            split_vector = split(input, delimiter_pipe);
            string call_number = "";
            string title = "";
            string subjects = "";
            string description = "";
            string distributor = "";
            string notes = "";
            string series = "";
            string label = "";


                for(unsigned x = 0; x<split_vector.size(); x++)
                {
                    if(x==0)
                        call_number = split_vector[x];
                    else if(x==1)
                        title = split_vector[x];
                    else if(x==2)
                        subjects = split_vector[x];
                    else if(x==3)
                        description = split_vector[x];
                    else if(x==4)
                        distributor = split_vector[x];
                    else if(x==5)
                        notes = split_vector[x];
                    else if(x==6)
                        series = split_vector[x];
                    else if(x==7)
                        label = split_vector[x];
                }
                              
                Video* video_obj = new Video(call_number, title, subjects, description, distributor, notes, series, label);
                card_catalogue.push_back(video_obj);
                split_vector.clear();
        }
        file_input_reader.close();
    }
    else{
        cout<<"Error in opening file";
    }


    txt = "periodic.txt";
    file_input_reader.open(txt);
    if(file_input_reader.is_open())
    {
        while(getline(file_input_reader, input))
        {
            split_vector = split(input, delimiter_pipe);
            string call_number = "";
            string title = "";
            string subjects = "";
            string author = "";
            string description = "";
            string publisher = "";
            string publishing_history = "";
            string series = "";
            string notes = "";
            string related_titles = "";
            string other_forms_of_title = "";
            string govt_doc_number = "";


                for(unsigned x = 0; x<split_vector.size(); x++)
                {
                    if(x==0)
                        call_number = split_vector[x];
                    else if(x==1)
                        title = split_vector[x];
                    else if(x==2)
                        subjects = split_vector[x];
                    else if(x==3)
                        author = split_vector[x];
                    else if(x==4)
                        description = split_vector[x];
                    else if(x==5)
                        publisher = split_vector[x];
                    else if(x==6)
                        publishing_history = split_vector[x];
                    else if(x==7)
                        series = split_vector[x];
                    else if(x==8)
                        notes = split_vector[x];
                    else if(x==9)
                        related_titles = split_vector[x];
                    else if(x==10)
                        other_forms_of_title = split_vector[x];
                    else if(x==11)
                        govt_doc_number = split_vector[x];
                }
                              
                Periodic* periodic_obj = new Periodic(call_number,title, subjects, author, description, publisher, publishing_history, series, notes, related_titles, other_forms_of_title, govt_doc_number);
                card_catalogue.push_back(periodic_obj);
                split_vector.clear();
        }
        file_input_reader.close();
    }
    else{
        cout<<"Error in opening file";
    }

}