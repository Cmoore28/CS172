//Cassadie Moore
//Find the smallest element

#include <iostream>

using namespace std;

int smallest(int* numbers, int size);//function prototype

int main()
{
	int numbers;
	int p_size;
	cout << "How many numbers are we going to play with? \n";//getting the size of the pointer
	cin >> p_size;
	int* p_int = new int [p_size];//dynamically allocating the array
	for (int i = 0; i < p_size; i++)//initialyzing the array
	{
		cout << "Number please: \n";
		cin >> numbers;
		p_int[i] = numbers;
	}
	cout << "The smallest of those numbers was " << smallest(p_int, p_size);//pooping out the smallest of the numbers
	cout << endl;
}

int smallest(int* numbers, int size)
{
	int smallest = 0;
	for (int i = 0; i < size; i++)//checking each number
	{
		if (numbers[i] < smallest)/*if the current number is smaller than the initialized small number
								  then the current number will be saved as the new smallest number*/
		{
			smallest = numbers[i];//
		}
	}
	return smallest;//return the baby number at the end :)
}
//side note: this was very easy to do because of watching the sorting jigs in class :D