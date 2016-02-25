//Cassadie Moore
//Hw 2 programing exercise #2 9.6

#include "QuadraticEquation.h"

int main()
{//Gives -nan(ind) as a 3rd root? Not sure why
	int x = 0;
	int y = 0;
	int z = 0;
	QuadraticEquation num1(x, y, z);

	cout << "Please give me an a, b, and c: ";
	cin >> x >> y >> z;

	cout << num1.displayRoots(x, y, z);
	cout << endl;

	return 0;
}