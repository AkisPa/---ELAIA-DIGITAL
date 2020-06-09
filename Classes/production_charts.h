#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//#include "../Classes/myfields.h"
class my_fields;

using namespace std;



class production_charts
{
public:
	production_charts(){}
	int production;
	int expenses;

	my_fields choose_field(int field_id);
	void add_production_results(int production);
	void add_expenses(int expenses);
	void modify_results(int choise);
	void store_production_results(int production,int expenses);
	void see_production_results();
	void see_production_prediction();
	void see_yearly_production_results();
	void see_yearly_compared_overall_production_results();
	void see_yearly_compared_production_results();


};