#include "Hash_table.h"
#include <functional>
using namespace std;

hash_table::hash_table()
{
	for (int i = 0; i < _table_size; i++)
	{
		table[i] = NULL;
	}
}

hash_table::~hash_table()
{
	for (int i = 0; i < _table_size; i++)
	{
		delete table[i];
	}
}

void hash_table::push(int key, int value)
{
	/* Делаем тут */
}