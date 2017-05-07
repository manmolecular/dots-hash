#include "Dots.h"
using namespace std;

/* Реализация класса dots */

/* Изменить координату в векторе */
void dots::set_coordinates(int _pos, double _value)
{
	coordinates[_pos] = _value;
}

/* Добавить в вектор */
void dots::add_coordinates(double _value)
{
	if (coordinates.size() < n)
	{
		coordinates.push_back(_value);
	}
}

/* Вернуть мерность пространства */
int dots::get_n()
{
	return n;
}

/* Ввод с клавиатуры вектора */
void dots::cin_input()
{
	for (int i = 0; i < coordinates.size(); i++)
	{
		double temp;
		cin >> temp;
		coordinates[i] = temp;
	}
}

/* Рандомизация вектора */
void dots::randomize(int _seed)
{
	srand(time(0) + _seed);
	for (int i = 0; i < coordinates.size(); i++)
	{
		coordinates[i] = rand() % rand_border;
	}
}

/* Отобразить текущий вектор */
void dots::show_coordinates()
{
	for (int i = 0; i < coordinates.size(); i++)
	{
		cout << coordinates[i] << " ";
	}
}