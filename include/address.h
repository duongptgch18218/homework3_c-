#ifndef _ADDRESS_H_
#define _ADDRESS_H_

#include <iostream>
#include <string>

using namespace std;

class Address{
    private:
        int home_number;
        string street;
        string town;
    
    public:
        Address(const int &home_number, const string &street, const string &town);
        Address();
        
        int get_home_number();
        string get_street();
        string get_town();

        void set_home_number(const int &new_home_number);
        void set_street(const string &new_street);
        void set_town(const string &new_town);
        ~Address();
};


#endif