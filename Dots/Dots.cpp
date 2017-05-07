#include "Dots.h"
using namespace std;

/* Реализация класса */

/* Задание мерности пространства */
inline void dots::set_dimension(int _n)
{
	n = _n;
}

/* Задание модуля рандомизации */
inline void dots::set_rand(int _border)
{
	rand_border = _border;
}

/* Изменить координату в векторе */
inline void dots::set_coordinates(int _pos, double _value)
{
	coordinates[_pos] = _value;
}

/* Заполнить вектор */
inline void dots::fill_coordinates(double _value)
{
	coordinates.push_back(_value);
}

/* Вернуть мерность пространства */
inline int dots::get_n()
{
	return n;
}

/* Ввод с клавиатуры вектора */
inline void dots::cin_input()
{
	for (int i = 0; i < n; i++)
	{
		double temp;
		cin >> temp;
		coordinates.push_back(temp);
	}
}

/* Рандомизация вектора */
inline void dots::randomize()
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		coordinates.push_back(rand() % rand_border);
	}
}