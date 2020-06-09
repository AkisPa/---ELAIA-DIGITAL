#include "../Classes/seasonal_actions.h"
using namespace std;

void seasonal_actions::system_add_advice(int advice_id , string advice_message){
    cout << "creating advice with id : " << advice_id << "  and message : " << advice_message  << endl;
}


void seasonal_actions::system_remove_advice(int advice_id){
    cout << "removing advice with id: " <<  advice_id << endl;
}

void seasonal_actions::see_advice( int advice_id ){
    cout << "message of advice with id : " <<  advice_id << endl;
}
