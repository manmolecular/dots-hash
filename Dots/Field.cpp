#include "Field.h"
using namespace std;

/* Реализация класса Field */

/* Поиск точки */
bool field::search(dots _temp, int *_pos)
{
	bool _stop = false;
	for (int i = 0; i < _field.size() && !_stop; i++)
	{
		if (_field[i] == _temp)
		{
			*_pos = i;
			_stop = true;
			return true;
		}
	}
	return false;
}

/* Вернуть точку из пространства по индексу */
dots field::return_dot(int _i)
{
	_dot = &_field[_i];
	return *_dot;
}

/* Вернуть вектор пространства */
vector<dots> field::return_field()
{
	return _field;
}

/* Вставить точку в пространство */
void field::push_dot(dots _temp)
{
	_field.push_back(_temp);
}

/* Получить рандомное поле точек */
void field::get_random_field()
{
	for (int i = 0; i < _field.size(); i++)
	{
		_dot->randomize(i);
		_field[i] = *_dot;
	}
}

/* Отобразить пространство */
void field::show_field()
{
	for (int i = 0; i < _field.size(); i++)
	{
		_dot = &_field[i];
		_dot->show_coordinates();
		cout << endl;
	}
}