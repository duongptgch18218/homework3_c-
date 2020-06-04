#ifndef _SCHOOL_H_
#define _SCHOOL_H_

#include <iostream>
#include <string>
#include "../include/address.h"

using namespace std;

class School{
    private:
        string name;
        Address address;
        int students;
    public:

        School(const string &name, Address &address, const int &students);

        string get_name_school();
        Address get_address_school();
        int get_number_student();

        void show_info_school();
        void set_number_student(const int &students);
        void set_name_school(const string &name);
        void set_address_school(Address &new_address);
        ~School();


};



#endif