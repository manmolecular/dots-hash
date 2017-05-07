#include "Dots.h"
using namespace std;

/* ���������� ������ */

/* ������� �������� ������������ */
inline void dots::set_dimension(int _n)
{
	n = _n;
}

/* ������� ������ ������������ */
inline void dots::set_rand(int _border)
{
	rand_border = _border;
}

/* �������� ���������� � ������� */
inline void dots::set_coordinates(int _pos, double _value)
{
	coordinates[_pos] = _value;
}

/* ��������� ������ */
inline void dots::fill_coordinates(double _value)
{
	coordinates.push_back(_value);
}

/* ������� �������� ������������ */
inline int dots::get_n()
{
	return n;
}

/* ���� � ���������� ������� */
inline void dots::cin_input()
{
	for (int i = 0; i < n; i++)
	{
		double temp;
		cin >> temp;
		coordinates.push_back(temp);
	}
}

/* ������������ ������� */
inline void dots::randomize()
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		coordinates.push_back(rand() % rand_border);
	}
}