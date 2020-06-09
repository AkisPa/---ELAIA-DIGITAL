#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <list>


using namespace std;

class notification_alerts
{
public:
	notification_alerts(){}
	
list<char> notifications();

void system_add_notification(int notification_id , string notification_message);
void system_remove_notification(int notification_id );
void see_notification(int notification_id);
};

