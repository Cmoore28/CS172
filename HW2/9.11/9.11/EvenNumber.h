#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class EvenNumber
{
private:
	int value;//the value of the number that will be surrounded by even numbers

public:
	EvenNumber()//Default constructor
	{
		value = 0;
	}
	EvenNumber(int x)//Overloaded constructor setting the value for use in the main
	{
		value = x;
	}
	int getValue(int a)//returning the value put in
	{
		return a;
	}
	int getNext(int b)//returning the even number after the value inputted
	{
		if ((b % 2) == 0)//If the remainder of the value divided by 2 is zero then increment the value by 2
		{
			return (b + 2);
		}
		else//If the remainder of the value divided by 2 is not zero then increment the value by 1
		{
			return (b + 1);
		}
	}
	int getprevious(int c)//returning the even number before the value inputted
	{
		if ((c % 2) == 0)//If the remainder of the value divided by 2 is zero then decrement the value by 2
		{
			return (c - 2);
		}
		else//If the remainder of the value divided by 2 is not zero then decrement the value by 1
		{
			return (c - 1);
		}
	}
};
