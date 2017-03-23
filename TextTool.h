#pragma once
#pragma once

#include <string>
#include <stdexcept>
#include <fstream>
#include <iostream>
#include <list>

using namespace std;

class TextTool {
public:
    // default constructor
    TextTool() {
        wordlist = new list<string>;
        dupw = new list<string>;
        n = 0;
        duplicates = 0;
    }
    
    // destructor
    ~TextTool() {
        delete wordlist;
        delete dupw;
    }
    
    // Load information from a text file with the given filename.
    void loadListFromTextfile(string filename) {
        ifstream ifs;
        ifs.open(filename);
        
        if (ifs.is_open()) {
            string aword;
            while (ifs >> aword) {
                addEntryBack(aword);
            }
            ifs.close();
        }
        else
            throw invalid_argument("Could not open file " + filename);
    }
    
    // return the number of words in the linked list
    int totalWords() {

        return -1;
    }
    
    // add entry at the back of the linked list
    void addEntryBack(const string& aword) {
        wordlist->push_back(aword);
        
    }
    
    // print all words stored in the linked list, separated by a space
    const string listToString() {
        for( list<string>::iterator it=wordlist->begin(); it!=wordlist->end(); ++it)
        {
            cout<<" "<<*it;
            cout<<endl;
        }
        return "";
    }
    
    // print duplicated words in the linked list
    void printDuplicates() {

        for(list<string>::iterator d=dupw->begin(); d!=dupw->end(); ++d)

            if(dupw->begin() == dupw->end())
            {
                cout<<" "<<*d;
                cout<<endl;
            }
        }
    
    // remove duplicated words in the linked list
    void removeDuplicates() {

        
    }
    
    // determine the total number of duplicated words in the list
    int totalDuplicates() {
        // TO BE COMPLETED
        return -1;
    }
    
    // check if the list is empty
    bool isEmpty() {
        return (n==0);
    }
    
    // Empty the list
    void makeEmpty() {
        // TO BE COMPLETED
    }
    
private:
    
    int n;
    int duplicates;
    class TextTool *next;
    
    list<string> *wordlist;
    list<string> *dupw;

};
