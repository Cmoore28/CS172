//Cassadie Moore
//Is sorted?

#include <iostream>
#include <string>

using namespace std;

template<typename S>
bool isSorted(S list[], int size);

int main()
{
	/*I interpreted the meaning of sorted in this exercise to mean in order from smallest value to largest value*/

	int list1[5] = { -1, 2, 3, 4, 5 };//an array of ints!
	double list2[5] = { 4.5, 2.3, 7.8, 4.7, 1.2 };//an array of doubles!
	string list3[3] = { "alpha", "beta", "omega" };//an array of strings

	isSorted(list1, 5);//the array of ints should be sorted
	isSorted(list2, 5);//the array of doubles is not sorted
	isSorted(list3, 3);//the program doesn't like playing with strings and numbers in the same function

	return 0;
}

template<typename S>
bool isSorted(S list[], int size)
{
	S smallest = 0;//initializing a temperary holder of sorts
	for (int i = 0; i < size; i++)//going through all the elements of the array
	{
		if (list[i] < smallest)//checking to see if the current element is the smallest
		{
			smallest = list[i];
		}
	}
	if (smallest != list[0])//returns false if the first element is not the smallest because that automatically 
		//means that the array is not sorted
	{
		cout << "Not sorted :( \n";
		return false;
	}
	else//I'm just assuming that if the first element is the smallest then the array is sorted for this exercise
	{
		cout << "Sorted! \n";
		return true;
	}
}