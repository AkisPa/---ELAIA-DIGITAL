#include "myfields.h"

void my_fields::set_field_name(& a)
{
	cout << "please name your field";
	cin >> a;

}

void my_fields::get_coords(pair<float, float> coordinates)
{
	get Longtitute(coordinates.first);
	get Latitude(coordinates.second);
}

void my_fields::store_data()
{
	INSERT INTO	datastorage(field_names) (field_name);
	INSERT INTO	datastorage(location)	(coordinates);


}

void my_fields::change_data(int a)
{
	SELECTO FROM datastorage(a);
	INSERT INTO datastorage(cin.get());
}

void my_fields::delete_field(string my_field)
{
	SELECT FROM	datastorage(my_field);
		DELETE FROM	datstorage(my_field);
}


void my_fields::get_stored_fields(list<field> saved_fields)
{
	SELCECT ALL FROM datastorage(my_fields) OUTPUT TABLE(saved_fields);
}

void my_fields::see_field_data()
{
	cout << for (auto const& i : saved_fields) {
		cout << i << "\n"
}

}


