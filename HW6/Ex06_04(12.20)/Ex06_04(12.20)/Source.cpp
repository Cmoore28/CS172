//Cassadie Moore
//Shuffle vector

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

template<typename X>
void shuffle(vector<X> v);

int main()
{
	int number;
	vector<int> n(10);
	for (int i = 0; i < 10; i++)
	{
		cout << "Number please: ";
		cin >> number;
		n[i] = number;
	}

	shuffle(n);
	for (int i = 0; i < 10; i++)
	{
		cout << n.at(i) << " ";
	}

	return 0;
}

template<typename X>
void shuffle(vector<X> v)
{
	int a = v.size();
	X b = 0;
	vector<X> temp(a);
	stack<X> numbers;
	for (int i = 0; i < a; i++)
	{
		b = v.at(i);
		numbers.push(b);
	}
	for (int j = 0; j < a; j++)
	{
		b = numbers.top();
		temp[j] = b;
		numbers.pop();
	}
	v.swap(temp);
}