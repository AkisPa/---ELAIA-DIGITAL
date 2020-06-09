#include "../Classes/notification_alerts.h"
using namespace std;

void notification_alerts::system_add_notification(int notification_id , string notification_message){
    cout << "creating notification with id : " << notification_id << "  and message : " << notification_message  << endl;
}


void notification_alerts::system_remove_notification( int notification_id){
    cout << "removing notification with id: " <<  notification_id << endl;
}

void notification_alerts::see_notification( int notification_id ){
    cout << "message of notification with id : " <<  notification_id << endl;
}
