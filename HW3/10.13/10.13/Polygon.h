#pragma once

#include <string>
#include <iostream>
#include <cmath>//this allows me to use tangent because for some odd reason I need tangent for the area of my polygons

using std::string;//I shall do this instead of carrying around the entire Webster's dictionary :D
using std::cin;
using std::cout;
using std::endl;

class Polygon
{
private:
	int n;//number of sides
	double side;//length of the side
	double x;//x and y coordinates of the center of the polygon
	double y;

public:
	Polygon();//no arg constructor, 3 sides length 1 centered at (0,0)
	Polygon(int s, double length);//sets a polygon with whatever number and length of sides, centered at (0,0)
	Polygon(int s, double length, double x, double y);/*this sets all the things of the polygon, number and length of sides
													  as well as where it's centered*/
	//these are my setter, or as the book refers to them --> accessor, functions
	int getN() const;//this one returns the number of sides
	double getSide() const;//and this one returns the side length
	double getX() const;//and these two return the x and y coordinates
	double getY() const;
	//these are my setter, or mutator, functions
	void setN(int s);//this one sets the amount of sides
	void setSide(double length);//and this one sets the side length
	void setX(double a);//and these two set the (x, y) coordinates for the center for the polygon
	void setY(double b);
	void getPerimeter() const;//this calculates and cout's the perimeter
	void getArea() const;//and this one calculates and cout's the area
};
