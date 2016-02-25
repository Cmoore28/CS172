#pragma once
#include <iostream>

using namespace std;

class Fan//A collection of fans, as in the electronic thingy that creates a wave of air
{
private://Nobody shall mess with my fans!
	int speed;//The speed of the van can be a 1, 2, or 3
	bool on;//True means the fan is on and false means the fan is off
	double radius;//The radius of the circle that the fan travels in while it's on

public://Free reign to all!
	Fan ()//My default fan has a speed if 1, is off, and has a radius of 5
	{
		speed = 1;
		on = false;
		radius = 5;
	}
	Fan (int speed1, bool on1, double rad)//Defining construct
	{
		speed = speed1; 
		on = on1;
		radius = rad;
	}

	void setTheFan()
	{//Making new fans in the main.cpp :)
		cout << "What is the speed of the fan: \n";
		cin >> speed;
		cout << "The fan is on. Answer this question as true for on or false for off. \n";
		cin >> on;
		cout << "What is the radius of the fan: \n";
		cin >> radius;
	}

	int getSpeed()//Getter for the speed
	{
		return speed;
	}
	bool getFanOperation()//Getter for whether the fan is on or off
	{
		return on;
	}
	double getRadius()//Getter for the radius
	{
		return radius;
	}
	void getItAll()//A combined getter function
	{
		getSpeed();
		getFanOperation();
		getRadius();
		cout << "This fan has a speed of " << speed << ", a radius of " << radius << ", and it is ";/*Spitting out the
																									properties */
		if (on == true)
		{
			cout << "on. \n";
		}
		else if (on == false)
		{
			cout << "off. \n";
		}
	}
};
