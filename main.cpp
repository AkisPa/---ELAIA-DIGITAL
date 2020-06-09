#include <iostream>
#include "Classes/sign_up.h"
#include "Classes/actions.h"
#include "Classes/seasonal_actions.h"
#include "Classes/notification_alerts.h"
#include "Classes/weather.h"
#include "Classes/production_charts.h"

using namespace std;

int main()
{
    // signup example
    sign_up user;
    user.create_database_tables();
    user.create_new_user("test_name", "p@ssword", "p@ssword");

    // actions example
    actions action;
    action.add_action();
    action.modify_action();
    action.delete_action();

    //notification alerts
    notification_alerts notification_alert;
    notification_alert.system_add_notification(1, "test alert");
    notification_alert.system_remove_notification(1);
    notification_alert.see_notification(1);

    //seasonal advice example
    seasonal_actions advice;
    advice.system_add_advice(1, "test advice");
    advice.system_remove_advice(1);
    advice.see_advice(1);

    //weather example
    weater weather;
    weather.get_daily_weather();
    weather.show_monthly_history();
    weather.show_3month_history();
    weather.show_6month_history();
    weather.show_yearly_history();

    //production_charts example
    production_charts production;
    production.see_production_prediction();
    production.see_production_results();


 return 0;
} 