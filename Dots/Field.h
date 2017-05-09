#pragma once
#include "Dots.h"
#include <cstddef>
using namespace std;

/* Класс объёмного пространства, порожденного точками */

class field
{
	private:
		vector <dots> _field;
		dots *_dot;
	protected:
		static const int f_size;
	public:
		field() : _field(f_size) {_dot = new dots;};
		void push_dot(dots _temp);
		dots return_dot(int _i);
		bool search(dots _temp, int *_pos);
		void get_random_field();
		void show_field();
		vector <dots> return_field();
};