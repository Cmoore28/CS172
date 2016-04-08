//Cassadie Moore
//Analyze input

#include <iostream>

using namespace std;//Sorry, I'm just going to carry around the websters dictionary for this one

int * alloc_array(int size);//prototype so I can use this function in my main

int main()
{
	int asize;//this is going to be the size of the array the user will be inputting numbers into
	cout << "How many numbers are we going to work with today? \n";
	cin >> asize;//please fill this variable with a number that will later be an amount of integers to be played with
	int* array = alloc_array(asize);//here is the usage of the function that will allow the user to fill the array

	double average = 0;//this variable will be the average later down the line
	int total = 0;//this variable is going to hold onto the total value of all the numbers the user inputs
	for (int i = 0; i < asize; i++)//adding all of the integers into the total to later be calculated into the average
	{
		total += array[i];
	}
	average = (total / asize);//calculating the average

	cout << "The average of the numbers you gave me is " << average << endl;//letting the user know what I did with their numbers

	delete[] array; //NO ZOMBIE APOCOLYPSI FOR ME

	return 0;
}

int * alloc_array(int size)
{
	int* array_of_nums = new int[size];//creating a new array of a size that will be determined at a later time
	for (int i = 0; i < size; i++)//putting stuff into the array that was just created, in this case we're inputting integers
	{
		cout << "Give me a number: \n";
		cin >> array_of_nums[i];
	}
	return array_of_nums;
}