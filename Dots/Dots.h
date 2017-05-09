#pragma once
#include <vector>
#include <iostream>
#include <ctime>
using namespace std;

/* Класс точек в n-мерном пространстве */

class dots
{
	private:
		friend class field;
		friend class hash_table;
	protected:
		bool empty;
		static int n;
		static int rand_border;
		vector <double> coordinates;
		dots* next;
	public:
		bool operator==(const dots &rhs)
		{
			return (this->coordinates == rhs.coordinates);
		};
		dots() : coordinates(n) 
		{
			this->next = NULL;
		};
		static void set_dimension(int _n) {n = _n;};
		static void set_rand(int _border) {rand_border = _border;};
		void add_coordinates(double _value);
		void set_coordinates(int _pos, double _value);
		void cin_input();
		void randomize(int _seed);
		void show_coordinates();
		int get_n();
};