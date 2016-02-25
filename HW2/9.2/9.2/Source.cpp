//Cassadie Moore
//Hw 2 programing exercise #1 9.2

#include "Fan.h"

int main()
{
	//My two lovely little fans
	Fan ceilingFan(3, true, 10);
	Fan miniFan(2, false, 5);

	ceilingFan.getItAll();//returning the properties of my first fan
	miniFan.getItAll();//returning the properties of my second fan

	cout << endl;

	return 0;
}

