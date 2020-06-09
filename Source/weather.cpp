#include "../Classes/weather.h"
#include <vector>


using namespace std;

static string weather_api( string api_key ){
    return "weather_info_from_api";
}


string weater::get_daily_weather(){
    string api_key = "api_key_example";
    string weather = weather_api(api_key);

    return weather;
}


float weater::calculate_median_values(int temperature,float humidity_percentange,float drought_percentage,int rain_days,int sunny_days,double water_amount){

    //calculations for median values, following is just an example
    float median = temperature*humidity_percentange*drought_percentage*water_amount/rain_days + sunny_days;
    return median;
}

void weater::show_monthly_history(){
    //get values from database based on date
    vector<string> one_month_weather;
    for (int i = 0; i < one_month_weather.size(); i++) 
        cout << one_month_weather[i] << "\n";  
}

void weater::show_3month_history(){
    //get values from database based on date
    vector<string> three_month_weather;
    for (int i = 0; i < three_month_weather.size(); i++) 
        cout << three_month_weather[i] << "\n";  
}

void weater::show_6month_history(){
    //get values from database based on date
    vector<string> six_month_weather;
    for (int i = 0; i < six_month_weather.size(); i++) 
        cout << six_month_weather[i] << "\n";  
}

void weater::show_yearly_history(){
    //get values from database based on date
    vector<string> one_year_weather;
    for (int i = 0; i < one_year_weather.size(); i++) 
        cout << one_year_weather[i] << "\n";  
}


