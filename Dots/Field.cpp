#include "Field.h"
using namespace std;

/* Реализация класса Field */

vector<dots> field::return_field()
{
	return _field;
}

void field::push_dot(dots _temp)
{
	_field.push_back(_temp);
}

void field::get_random_field()
{
	for (int i = 0; i < _field.size(); i++)
	{
		_dot->randomize(i);
		_field[i] = *_dot;
	}
}

void field::show_field()
{
	for (int i = 0; i < _field.size(); i++)
	{
		_dot = &_field[i];
		_dot->show_coordinates();
		cout << endl;
	}
}