#pragma once
#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>
using namespace std;

class Rectangle
{
private:
	double x;
	double y;
	double width;
	double height;

public:
	Rectangle();//no arg constructor
	Rectangle(double a, double b, double c, double d);//immediate setter constructor thingy mabob
	//constant getters for the member variables
	double getX() const;
	double getY() const;
	double getWidth() const;
	double getHeight() const;
	//setters for the member variables
	double setX(double a);
	double setY(double b);
	double setWidth(double c);
	double setHeight(double d);
	double getArea() const;//calculates and returns the area of the rectangle
	double getPerimeter() const;//calculates and returns the perimeter of the rectangle
	void contains(double a, double b) const;/*keeps the x and y constant while checking if
											the (x, y) point would be in the rectangle*/
	void contains(const Rectangle &r);//checks to see of one rectangle is in another
	void overlaps(const Rectangle &r);//checks to see if two rectangles overlap
};

#endif
