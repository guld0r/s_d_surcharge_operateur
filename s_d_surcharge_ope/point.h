#pragma once
#include <iostream>
#include <stddef.h>

using namespace std;
class point
{
	static int npt;     // nombre total de points
	static int npt_dyn; // nombre de points "dynamiques"
	int x, y;
	int data[100];
public:
	point(int abs = 0, int ord = 0) 
	{ 
		x = abs; y = ord;
		npt++;
		cout << "++ nombre total de points : " << npt << "\n";
	}//constructeur
	~point()
	{
		npt--;
		//cout << "-- nombre total de points : " << npt << "\n";
	}

	point(const point &source);//constructeur par copie

	int& operator[] (unsigned i)
	{
		if (i > 99)
			cerr<<("pas bien");
		return data[i];
	}

	//surdéfinition op + avec fonction membre
	point operator+ (point p);
	point operator-(point p);
	point operator+=(point);
	point operator-=(point);
	point operator*=(point);
	point operator/=(point);
	bool operator==(point p)const;
	bool operator!=(point p)const;
	point& operator=(point a);

	void * operator new (size_t s)
	{
		npt_dyn++;
		cout << "     il y a " << npt_dyn << " points dynamiques sur un "<<endl;
		return ::new char[s];
	}

	void operator delete (void * p)
	{
		npt_dyn--;
		cout << "     il y a " << npt_dyn << " points dynamiques sur un "<<endl;
		::delete (p);
	}
	
	friend ostream& operator<<(ostream& os, const point& mp);//surcharge cout
	friend istream& operator>>(istream& is, point& mp);//surcharge cin
};

