//Cassadie Moore
//Hw 2 programing exercise #3 9.11

#include "EvenNumber.h"

int main()
{
	int n = 0;
	EvenNumber zero(n);

	cout << "Please enter a number: ";//The assignment calls for the example to be 16
	cin >> n;

	cout << "You entered " << zero.getValue(n) << endl;//returns the value set, which for the purpose of this assignment was 16
	cout << "The even number after your number is " << zero.getNext(n) << endl;//returns the even number after the value
	cout << "The even number before your number is " << zero.getprevious(n) << endl;//returns the even number before the value

	return 0;
}