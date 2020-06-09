#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <list>


using namespace std;


class seasonal_actions
{
public:
	seasonal_actions(){}

	list<char> advice;
	void system_add_advice(int advice_id , string advice_message);
	void system_remove_advice(int advice_id);
	void see_advice( int advice_id);
	
};