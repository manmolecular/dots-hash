#pragma once
#include <vector>
#include <iostream>
#include <ctime>
using namespace std;

/* Класс точек в n-мерном пространстве */

class dots
{
	private:
		vector <double> coordinates;
		friend class field;
	protected:
		static int n;
		static int rand_border;
	public:
		dots() : coordinates(n) {};
		static void set_dimension(int _n) {n = _n;};
		static void set_rand(int _border) {rand_border = _border;};
		void add_coordinates(double _value);
		void set_coordinates(int _pos, double _value);
		void cin_input();
		void randomize(int _seed);
		void show_coordinates();
		int get_n();
};