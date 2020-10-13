#ifndef SEARCH_ENGINE_H
#define SEARCH_ENGINE_H
#include<string>
#include<iostream>
#include "media.h"
#include<vector> 
#include <sstream> 
#include<fstream>

// Search Engine Class

class Search_engine {

        public:
        Search_engine();
        //Vector of Media Pointers  
        const vector<Media*> search_title(string str); 

        const vector<Media*> search_subjects(string str);
        const vector<Media*> search_other(string str);

        const vector<Media*> search_call_num(string str);
        ~Search_engine();
    private:
        vector<Media*> card_catalogue;


};

#include "search_engine.cpp"
#endif