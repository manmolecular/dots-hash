#include "Hash_table.h"
#include <functional>
#include <sstream>
#include <iterator>
#include <cstddef>
using namespace std;

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

int hash_table::_hash(dots _temp)
{
	string _str = convert(_temp);
	std::hash<string> hash_obj;
	unsigned int hash = hash_obj(_str);
	hash = hash % _table_size;
	return hash;
}

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

void hash_table::show()
{
	for (int i = 0; i < _table_size; i++)
	{
		_dot = &table[i];
		_dot->show_coordinates();
		cout << endl;
	}
}