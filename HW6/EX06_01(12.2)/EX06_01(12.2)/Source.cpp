//Cassadie Moore
//Linear search

#include <iostream>
#include <string>

using namespace std;
template <typename T>
T linearSearch(T* list, T key, int arraySize);

int main()
{
	int list1[] = { 1, 2, 3, 4, 5 };//testing an int array
	double list2[] = { 1.3, 2.6, 6.4, 4.7, 9.2 };//testing a double array
	string list3[] = { "alpha", "beta", "omega", "lambda", "gama" };//testing a string array

	//the uses of these functions are to check for a linear path between the selected object in the array
	//and all of the elements of the array
	int i = linearSearch(list1, 1, 5);
	double j = linearSearch(list2, 1.3, 5);
	string k = linearSearch(list3, "beta", 5);//strings just don't seem to like me on this homework

	return 0;
}

template <typename T>
T linearSearch(T* list, T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])/*going through the array and checking for a linear pattern between the 
						   chosen element of the array and the rest of the elements of the array*/
		{
			return i;//returning the place in the array if a linear pattern is found
		}
		return -1;
	}
}