#include "../Classes/production_charts.h"
#include "../Classes/myfields.h"
#include <vector>
#include <numeric>

using namespace std;

	my_fields production_charts::choose_field(int field_id){
        //get the field from database and return it
        my_fields field;
        return field;
    }

	void production_charts::add_production_results(int production){
        //get productions from database , add them up and return the result
        vector<float> production_sum;
        cout << accumulate(production_sum.begin(), production_sum.end(), 0);
    }

	void production_charts::add_expenses(int expenses){
        //get expenses from database , add them up and return the result
        vector<float> expenses_sum;
        cout << accumulate(expenses_sum.begin(), expenses_sum.end(), 0);
    }

	void production_charts::modify_results(int choise){}
	void production_charts::store_production_results(int production,int expenses){}
	void production_charts::see_production_results(){
        //get productions from database
        vector<float> production_sum;
        for (std::vector<float>::const_iterator i = production_sum.begin(); i != production_sum.end(); ++i)
            std::cout << *i << ' ';
    }
	void production_charts::see_production_prediction(){
        //get production prediction from database or api
        vector<float> prediction;
        for (std::vector<float>::const_iterator i = prediction.begin(); i != prediction.end(); ++i)
            std::cout << *i << ' ';
    }
	void production_charts::see_yearly_production_results(){
        //get productions from database for year
        vector<float> production_year;
        for (std::vector<float>::const_iterator i = production_year.begin(); i != production_year.end(); ++i)
            std::cout << *i << ' ';
    }
	void production_charts::see_yearly_compared_overall_production_results(){}
	void production_charts::see_yearly_compared_production_results(){}