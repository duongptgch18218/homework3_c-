#include "../include/school.h"
#include "../include/address.h"
#include <iostream>
#include <string>

using namespace std;

School::School(const string &name, Address &address, const int &students){
    this -> name = name;
    this -> address = address;
    this -> students = students;
}

string School::get_name_school(){
    return this -> name;
}

Address School::get_address_school(){
    return this -> address;
}

int School::get_number_student(){
    return this -> students;
}

void School::show_info_school(){
    cout << "School name: " << this -> name << " -|- School address: " << this -> address.get_home_number() << " - " << this -> address.get_street() << " - " << this -> address.get_town() << " -|- Number of student: " << this -> students << ".|";
}

void School::set_number_student(const int &students){
    this -> students = students;
}

void School::set_name_school(const string &name){
    this -> name = name;
}

void School::set_address_school(Address &address){
    this -> address = address;
}

School::~School(){
    cout << "G00D Bie";
}