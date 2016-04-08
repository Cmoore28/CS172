#include "Rectangle.h"

Rectangle::Rectangle()//no arg constructor, initializes triangles without specific member variables
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

Rectangle::Rectangle(double a, double b, double c, double d)//sets up a rectangle with specific parameters
{
	x = a;
	y = b;
	width = c;
	height = d;
}

double Rectangle::getX() const//gets and returns x
{
	return x;
}

double Rectangle::getY() const//gets and returns y
{
	return y;
}

double Rectangle::getWidth() const//gets and returns the width
{
	return width;
}

double Rectangle::getHeight() const//gets and returns the height
{
	return height;
}

double Rectangle::setX(double a)//sets x
{
	x = a;
	return x;
}

double Rectangle::setY(double b)//sets y
{
	y = b;
	return y;
}

double Rectangle::setWidth(double c)//sets the width
{
	width = c;
	return width;
}

double Rectangle::setHeight(double d)//sets the height
{
	height = d;
	return height;
}

double Rectangle::getArea() const//calculates and returns the area
{
	double area = width * height;
	return area;
}

double Rectangle::getPerimeter() const//calculates and returns the perimeter
{
	double perimeter = (2 * width) + (2 * height);
	return perimeter;
}

void Rectangle::contains(double a, double b) const//checks to see if a point is within the rectangle
{
	
}

void Rectangle::contains(const Rectangle &r)//checks to see if one rectangle is inside another
{
	
}

void Rectangle::overlaps(const Rectangle &r)//checks to see if one rectangle overlaps another
{
	
}