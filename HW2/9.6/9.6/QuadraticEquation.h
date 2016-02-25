#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class QuadraticEquation//My quadratic Equation computer hack
{
private://Don't touch my properties.
	double a;
	double b;
	double c;
	double Discriminant;
	double r1; 
	double r2;

public://Okay, you can touch these.
	QuadraticEquation()//Default construct
	{
		a = 1;
		b = 4;
		c = 4;
	}
	QuadraticEquation(int e, int f, int g)//Setter constructor
	{
		a = e;
		b = f;
		c = g;
	}

	double getA()//Give me an a!
	{
		return a;
	}
	double getB()//Give me a b!
	{
		return b;
	}
	double getC()//Give me a c!
	{
		return c;
	}
	void getEm()//What does that spell? abc!
	{
		getA();
		getB();
		getC();
	}
	void getDiscriminant(int a, int b, int c)//computing the discriminant from a, b and c
	{
		Discriminant = ((b * b) - (4 * a * c));
	}
	void getRoot1(int a, int b, int c)//calculating the first root
	{
		getDiscriminant(a, b, c);
		r1 = ((-b + sqrt(Discriminant)) / (2 * a));
	}
	void getRoot2(int a, int b, int c)//calculating the second root
	{
		getDiscriminant(a, b, c);
		r2 = ((-b - sqrt(Discriminant)) / (2 * a));
	}
	double displayRoots(int a, int b, int c)//spitting out the roots depending on the discriminant
	{
		getDiscriminant(a, b, c);
		getRoot1(a, b, c);
		getRoot2(a, b, c);
		if (Discriminant > 0)//A positive discriminant will give both roots
		{
			cout << "The roots are: \n";
			cout << r1 << endl;
			cout << r2 << endl;
		}
		else if (Discriminant == 0)//if the discriminant is 0 you get 1 root
		{
			return r1;
		}
		else//otherwise you get an imaginary number
		{
			cout << "The equation has no real roots. \n";
			return 0;
		}
	}
};
