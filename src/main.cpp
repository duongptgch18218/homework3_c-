#include <iostream>
#include "../include/school.h"
#include "../include/address.h"

using namespace std; 

int main(int argc, char *argv[])
{
	Address adr1(13, "ton that thuyet", "Ha Noi");
	School G("Greenwich", adr1, 500);
	G.show_info_school();
	Address x = G.get_address_school();
	cout << x.get_home_number() << x.get_street() << x.get_town();
}