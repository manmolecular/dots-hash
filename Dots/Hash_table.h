#pragma once
#include "Dots.h"
#define _table_size 100000
using namespace std;

/* ���-������� � ������� ������� */
/* Key - ����� ���� ��������� � ������� */

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