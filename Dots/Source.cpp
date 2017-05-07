#include "Dots.h"
#include "Field.h"
#define _size 100
#define _n 5
#define _rand_border 1000
using namespace std;

/* Реализация */

/* Инициализация static-переменных*/
int dots::n = 0;
int dots::rand_border = 0;
int field::f_size = _size;

int main()
{
	/* Задание мерности пространства и границы рандома*/
	dots::set_dimension(_n);
	dots::set_rand(_rand_border);

	/* Создани пространства точек */
	field my_field;
	my_field.get_random_field();
	my_field.show_field();
	return 0;
}