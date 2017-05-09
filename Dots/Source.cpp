#include "Dots.h"
#include "Field.h"
#include "Hash_table.h"
#define _size 100
#define _n 10
#define _rand_border 1000
#define _show true
using namespace std;

/* Реализация */ 

/* Инициализация static-переменных*/
int dots::n = 0;
int dots::rand_border = 0;
const int field::f_size = _size;

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

	/* Поиск точки в пространстве */
	dots temp = my_field.return_dot(5);
	int _pos = 0;
	start = clock();
	cout << endl << boolalpha << "Search: " << my_field.search(temp, &_pos) << endl;
	cout << "Position is: " << _pos << endl;
	end = clock();

	/* Результат по времени*/
	cout << "Runtime: " << ((double)end - start) / ((double)CLOCKS_PER_SEC) << "s" << endl;

	return 0;
}