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
	public:
		dots() {};
		static int n;
		static int rand_border;
		static void set_dimension(int _n);
		static void set_rand(int _border);
		void fill_coordinates(double _value);
		void set_coordinates(int _pos, double _value);
		void cin_input();
		void randomize();
		int get_n();
};