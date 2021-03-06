﻿#include "Dots.h"
#include "Field.h"
#include "Hash_table.h"
#define _size 100000
#define _n 10
#define _rand_border 1000
#define _show false
using namespace std;

/* Реализация */ 

/* Инициализация static-переменных*/
int dots::n = 0;
int dots::rand_border = 0;
int hash_table::_table_size = _size;
const int field::f_size = _size;

/* Поиск по хеш-таблице */
void hash_search(dots _temp)
{
	/* Начальные объявления */
	dots temp;
	int _pos = 0;

	/* Инициализация времени для подсчета скорости поиска */
	clock_t start, end;

	/* Хеш-таблица с рандомными значениями */
	hash_table my_table;
	my_table.get_random_table();

	/* Добавление в таблицу */
	my_table.push(temp);
	my_table.push(temp);
	if (_show)
	{
		my_table.show();
	}

	/* Поиск точки по её хешу */
	start = clock();
	cout << endl << boolalpha << "Search: " << my_table.search(temp, &_pos) << endl;
	cout << "Position is: " << _pos << endl;
	end = clock();

	/* Результат по времени*/
	cout << "Runtime: " << ((double)end - start) / ((double)CLOCKS_PER_SEC) << "s" << endl;
}

int main()
{
	/* Задание мерности пространства и границы рандома*/
	dots::set_dimension(_n);
	dots::set_rand(_rand_border);

	/* Создани пространства точек */
	field my_field;
	my_field.get_random_field();
	if (_show)
	{
		my_field.show_field();
	}
	
	/* Инициализация времени для подсчета скорости поиска */
	clock_t start, end;

	/* Рандомизация точки поиска */
	srand(time(NULL));
	dots temp = my_field.return_dot(rand() % _size);

	/* Поиск точки в пространстве */
	int _pos = 0;
	start = clock();
	cout << endl << boolalpha << "Search: " << my_field.search(temp, &_pos) << endl;
	cout << "Position is: " << _pos << endl;
	end = clock();

	/* Результат по времени*/
	cout << "Runtime: " << ((double)end - start) / ((double)CLOCKS_PER_SEC) << "s" << endl;

	/* Поиск для 100к элементов */
	hash_search(temp);

	/* Увеличение хеш-таблицы в два раза */
	hash_table::set_size(_size * 2);

	/* Поиск для 200к элементов */
	hash_search(temp);

	return 0;
}