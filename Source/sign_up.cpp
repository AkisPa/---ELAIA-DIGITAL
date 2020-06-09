#include "../Classes/sign_up.h"
using namespace std;

void sign_up::create_new_user(string username,string password1,string password2){
    cout << "creating user : " << username << "  with password : " << password1  << endl;
}


void sign_up::create_database_tables(){
    cout << "new tables created. " <<  endl;
}

sign_up::sign_up(){
    cout << "signup instance created. " <<  endl;
}