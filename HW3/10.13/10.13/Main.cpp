//Cassadie Moore
//Homework 3; exercise 10.13

#include "Polygon.h"

int main()
{//please pardon the names of my polygons, I was trying to be creative :)
	Polygon alpha;//the no arg constructor regular polygon
	Polygon beta(6, 4);//the polygon that is automatically centered at (0,0) and has 6 sides of 4 length
	Polygon omega(10, 4, 5.6, 7.8);//this polygon had 10 sides of length 4 and is centered at (5.6, 7.8)

	cout << "This regular polygon is alpha. ";//Let's introduce my no arg polygon alpha
	cout << endl;
	alpha.getPerimeter();//this is alpha's perimeter
	alpha.getArea();//and this is alpha's area

	cout << "This regular polygon is beta. ";//This is my regular polygon beta
	cout << endl;
	beta.getPerimeter();//this is beta's perimeter
	beta.getArea();//and this is beta's area

	cout << "This regular polygon is omega. ";//And this is my regular polygon omega
	cout << endl;
	omega.getPerimeter();//this is omega's perimeter
	omega.getArea();//and this is omega's area

	return 0;
}