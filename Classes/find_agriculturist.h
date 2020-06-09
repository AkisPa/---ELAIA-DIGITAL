#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>



using namespace std;


class find_agriculturist
{
public:
	find_agriculturist(){}

	pair <float,float> coords;
	
	void get_coords( pair <float,float> coords);
	void show_map_area(pair<float,float> coords);
	void choose_agriculturist_from_map();
	void send_data();
	void rate_agriculturist();
};