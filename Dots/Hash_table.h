#pragma once
#include "Dots.h"
#define _table_size 100000
using namespace std;

/* Хэш-таблица с методом цепочек */
/* Key - сумма всех координат в векторе */

class hash_table
{
	private:
		dots *table[_table_size];
		int key;
		int value;
		hash_table *next;
	public:
		hash_table();
		~hash_table();
		void push(int key, int value);
};