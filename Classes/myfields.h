
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <list>


using namespace std;



struct field
{
	char field_name;
	pair <float,float> coordinates;

};



class my_fields
{
public:
	my_fields(){} //contructor
	
	list<field> saved_fields;

	void set_field_name(char a);
	void get_coords(pair <float,float> coordinates);
	void store_data();
	void change_data();	
	void delete_field();
	void get_stored_fields(list<field> saved_fields);
	void see_field_data();
};