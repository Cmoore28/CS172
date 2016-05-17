#pragma once
#ifndef _COORDS_H_
#define _COORDS_H_

#include <iostream>
#include <stack>
#include <ctime>
#include <string>
#include <fstream>

class Coords
{
private:
	int x;
	int y;
public:
	Coords()
	{
		x = 0;
		y = 0;
	}
	void setCoords(int a, int b)
	{
		x = a;
		y = b;
	}
	int getX()
	{
		return x;
	}

	int getY()
	{
		return y;
	}
};

#endif
