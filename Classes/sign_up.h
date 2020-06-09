
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;


class sign_up
{
public:
	sign_up();
	string username;
	string password1,password2;
	void create_new_user(string username,string password1,string password2);
	void create_database_tables();

	
};