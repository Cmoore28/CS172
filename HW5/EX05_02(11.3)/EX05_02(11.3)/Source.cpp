//Cassadie Moore
// Increase array size

#include <iostream>

using namespace std;

int* doubleCapacity(int* list, int size)//reads in a pointer to integers and a size for the integer pointer
{
	int new_size = (size * 2);//increases the old size and saves it as a new size
	int* holder = new int[new_size];//creates an empty pointer of the new size
	for (int i = 0; i < size; i++)//moves the stuff from the old pointer to the new bigger pointer
	{
		holder[i] = list[i];
	}
	delete[] list;//delete the stuff that the pointer was pointing to --> no zombies!
	list = holder;//set the starting pointer to the stuff the new bigger pointer is pointing to
	//and now we have a pointer with doubel the size it started with :D
	
	return list;//return the revised pointer :D
}