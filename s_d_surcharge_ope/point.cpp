#include "point.h"

point::point(const point &source)
{
	x= source.x;
	y = source.y;
}

point point::operator+(point p)
{
	x = x + p.x;
	y = y + p.y;
	return *this;
}

point point::operator-(point p)
{
	x = x - p.x;
	y = y - p.y;
	return *this;
}

point point::operator+=(point p)
{
	x += p.x;
	y += p.y;
	return *this;
}

point point::operator-=(point p)
{
	x -= p.x;
	y -= p.y;
	return *this;
}

point point::operator*=(point p)
{
	x *= p.x;
	y *= p.y;
	return *this;
}

point point::operator/=(point p)
{
	if (x != 0 && y != 0)
	{
		x /= p.x;
		y /= p.y;
		return *this;
	}
	return *this;
}

bool point::operator==(point p)const
{
	if (x==p.x && y== p.y)
		return true;
	return false;
}

bool point::operator!=(point p)const
{
	if (x != p.x || y != p.y)
		return true;
	return false;
}

ostream &operator<<(ostream &os, point const& mp)
{
	os << "coordonnees : " << mp.x << " " << mp.y << "\n";
	return os;
}

istream &operator>>(istream &is, point & mp)
{
	cout << "coordonnee x : "<<endl;
	is >> mp.x;
	cout << "coordonnee y : "<<endl;
	is >> mp.y;
	return is;
}

point& point::operator=(point a)
{
	x = a.x;
	y = a.y;
	return *this;
}