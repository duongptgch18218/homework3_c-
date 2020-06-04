#include "../include/address.h"
#include <iostream>

using namespace std;

Address::Address(const int &home_number, const string &street, const string &town){
    this -> home_number = home_number;
    this -> street = street;
    this -> town = town;
}
Address::Address(){
    
}

int Address::get_home_number(){
    return this -> home_number;
}
string Address::get_street(){
    return this -> street;
}

string Address::get_town(){
    return this->town;
}

void Address::set_home_number(const int &new_home_number){
    this -> home_number = new_home_number;
}

void Address::set_street(const string &new_street){
    this -> street = new_street;
}
void Address::set_town(const string &new_town){
    this -> town = new_town;
}

Address::~Address(){
    cout << "Done";
}
