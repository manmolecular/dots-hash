#pragma once
#include "Dots.h"
using namespace std;

/* ���-������� � ������� ������� */
/* Key - ����� ���� ��������� � ������� */

class hash_table
{
	private:
		dots *table;
		dots *_dot;
	protected:
		static int _table_size;
	public:
		hash_table();
		void push(dots _temp);
		int _hash(dots _temp);
		string convert(dots _temp);
		void show();
};