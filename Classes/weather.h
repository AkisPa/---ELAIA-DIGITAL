#include <iostream>
#include <stdlib.h>

using namespace std;

class weater
{
public:
	weater(){}
	
	int temperature;
	float humidity_percentange;
	float drought_percentage;
	int rain_days;
	int sunny_days;
	double water_amount;

	string get_daily_weather();
	float calculate_median_values(int temperature,float humidity_percentange,float drought_percentage,int rain_days,int sunny_days,double water_amount);
	void show_monthly_history();
	void show_3month_history();
	void show_6month_history();
	void show_yearly_history();

	
};