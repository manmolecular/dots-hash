#pragma once
#include "Dots.h"
using namespace std;

/* Хэш-таблица с методом цепочек */

class hash_table
{
	private:
		dots *table;
		dots *_dot;
	protected:
		static int _table_size;
	public:
		hash_table();
		static void set_size(int _n) { _table_size = _n; };
		void push(dots _temp);
		int _hash(dots _temp);
		string convert(dots _temp);
		void show();
		bool search(dots _temp, int *_pos);
		void get_random_table();
};