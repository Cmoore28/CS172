//Cassadie Moore
//Implement vector class

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> playtime(7);//create and fill a vector that I can play with :D
	playtime = { 3, 7, 4, 13, 9, 5, 4 };

	vector<int> muahaha(7);//this vector is gonna mess stuff up later
	muahaha = { 6, 6, 6, 6, 6, 6, 6 };

	cout << "starting playtime vector\n";//I'm displaying the changes made to the vector along the way
	for (int i = 0; i < 7; i++)//this is the beginning vector
	{
		cout << playtime[i] << " ";
	}
	cout << endl;

	playtime.push_back(7);//appends the 7 in my vector
	playtime.pop_back();//removes the last element in my vector

	cout << "after a push and a pop: \n";//displaying the vector after a few changes
	for (int i = 0; i < 7; i++)
	{
		cout << playtime[i] << " ";
	}
	cout << endl;

	cout << "vector size " << playtime.size() << endl;//displaying the size of the vector
	cout << "element at place three in my playtime vetor: " << playtime.at(3) << endl;/*displaying the element at
																						  a specific place in the vector*/
	playtime.empty();//checks to see if the vector is empty or not
	playtime.swap(muahaha);//swaps the contents of one vector with another

	cout << "after an evil swap, muahaha \n";//the display of the vector after swapping
	for (int i = 0; i < 7; i++)
	{
		cout << playtime[i] << " ";
	}

	playtime.clear();//clearing out the vector

	return 0;
}