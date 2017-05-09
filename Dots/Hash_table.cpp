#include "Hash_table.h"
#include <functional>
#include <sstream>
#include <iterator>
#include <cstddef>
using namespace std;

/* Заполнение таблицы рандомными значениями */
void hash_table::get_random_table()
{
	for (int i = 0; i < _table_size; i++)
	{
		_dot = &table[i];
		_dot->randomize(i);
	}
}

/* Поиск по хешу в таблице */
bool hash_table::search(dots _temp, int *_pos)
{
	bool _stop = false;

	int hash_num = _hash(_temp);
	_dot = &table[hash_num];
	if (_temp == *_dot)
	{
		*_pos = hash_num;
		_stop = true;
		return true;
	}
	while (!(*_dot == _temp))
	{
		if (!(_dot->next))
		{
			cout << "Not found" << endl;
			break;
		}
		_dot = _dot->next;
	}
	return false;
}

/* Конструктор */
hash_table::hash_table()
{
	table = new dots[_table_size];
	_dot = new dots;
	for (int i = 0; i < _table_size; i++)
	{
		_dot = &table[i];
		_dot->empty = true;
	}
}

/* Добавление элемента в таблицу */
void hash_table::push(dots _temp)
{
	int hash_num = _hash(_temp);
	_dot = &table[hash_num];
	if (_dot->empty == true)
	{
		table[hash_num] = _temp;
		_dot->empty = false;
		return;
	}
	while (_dot->next != NULL)
	{
		_dot = _dot->next;
	}
	_dot->next = &_temp;
}

/* Вычисление хеша */
int hash_table::_hash(dots _temp)
{
	string _str = convert(_temp);
	std::hash<string> hash_obj;
	unsigned int hash = hash_obj(_str);
	hash = hash % _table_size;
	return hash;
}

/* Конвертация из vector в string */
string hash_table::convert(dots _temp)
{
	string _str;
	if (!_temp.coordinates.empty())
	{
		for (int i = 0; i < _temp.coordinates.size(); i++)
		{
			int something = _temp.coordinates[i];
			_str += std::to_string(something);
		}
		return _str;
	}
}

/* Вывод */
void hash_table::show()
{
	for (int i = 0; i < _table_size; i++)
	{
		_dot = &table[i];
		_dot->show_coordinates();
		cout << endl;
	}
}