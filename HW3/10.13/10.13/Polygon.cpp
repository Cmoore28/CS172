#include "Polygon.h"

Polygon::Polygon()
{//no argument constructor
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}

Polygon::Polygon(int s, double length)
{
	n = s;
	side = length;
	x = 0;
	y = 0;
}

Polygon::Polygon(int s, double length, double a, double b)
{
	n = s;
	side = length;
	x = a;
	y = b;
}

int Polygon::getN() const
{
	return n;
}

double Polygon::getSide() const
{
	return side;
}

double Polygon::getX() const
{
	return x;
}

double Polygon::getY() const
{
	return y;
}

void Polygon::setN(int s)
{
	n = s;
}

void Polygon::setSide(double length)
{
	side = length;
}

void Polygon::setX(double a)
{
	x = a;
}

void Polygon::setY(double b)
{
	y = b;
}

void Polygon::getPerimeter() const
{
	double perimeter = side * n;
	cout << "The perimeter of your polygon is " << perimeter << endl;
}

void Polygon::getArea() const
{
	double area = (n * side * side) / (4 * tan(3.1415926 / n));
	cout << "The area of your polygon is " << area << endl;
}
