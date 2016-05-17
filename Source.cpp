#include "Coords.h"


using namespace std;

void initMap(int, int, int *checkwall[], int *checkVisited[]);	//initializes the map
int* checkAvail(Coords, int *checkVisited[], int, int, int);	//checks whether a coordinate is valid to move to
int pickDir(int *possible);										//randomly picks which of the valid directions to move to
void mapGen(int** checkWall, int** checkVisited, int X, int Y);	//generates map
ofstream mapgen;//global output stream
int main()
{
	mapgen.open("mapgen.txt");
	if (mapgen.fail())
	{
		cout << "can't open file" << endl;
		return 0;
	}

	srand(time(NULL));
	const int X = 20, Y = 20; //dimensions of the maze
	int **checkWall; //ptr to the two-dimensional array that determines walls and spaces
	int **checkVisited; //ptr to the two-dimensional array that stores whether a coordinate has been looked at

	checkWall = new int*[X];				//setting up the arrays to make the maze
	checkVisited = new int*[X];				//
											//
	for (int i = 0; i < X; i++)				//
	{										//	
		checkWall[i] = new int[X];			//
		checkVisited[i] = new int[X];		//
		for (int i = 0; i<Y; i++)			//
		{									//
			checkWall[i] = new int[Y];		//
			checkVisited[i] = new int[Y];	//
		}									//
	}										//

	initMap(X, Y, checkWall, checkVisited); // fills map with solid walls, sets checkVisited to zero(false) for all coordinates
	mapGen(checkWall, checkVisited, X, Y);	// generates the maze!


	for (int i = 0; i<20; i++)				//prints the maze to the screen, 'HHH' for wall, '   ' for space
	{										//
		for (int j = 0; j < X; j++) {		//
			if (checkWall[i][j])			//
				cout << "HHH";				//
			else							//
				cout << "   ";				//
		}									//
		cout << "HHH" << endl;				//
	}										//
	for (int i = -1; i < Y; i++)			//
		if (i == Y - 2)						//
			cout << "   ";					//
		else								//
			cout << "HHH";						//
	cout << endl;							//


	for (int j = 0; j < X; j++)				//deleting the zombies that made the maze
	{										//
		delete[] checkWall[j];				//
		delete[] checkVisited[j];			//
	}										//
	delete[] checkWall;						//
	delete[] checkVisited;					//
	mapgen.close();
}

void initMap(int x, int y, int *checkWall[], int *checkVisited[])
{
	for (int j = 0; j < y; j++)
	{
		for (int i = 0; i < x; i++)
		{
			checkWall[i][j] = 1; //sets all coordinates to walls
			checkVisited[i][j] = 0;//sets all coodinates to "not visited"
		}
	}

}

int* checkAvail(Coords coordinates, int *checkVisited[], int X, int Y, int tolerance)
{
	int U = -1, D = -1, L = -1, R = -1; //directions
	int x = coordinates.getX();//setting local variables to the current coordinates
	int y = coordinates.getY();//
							   ///////////////////////////////////////
	mapgen << "[checkAvail]coords:   " << x << "   " << y << endl;
							   //////////////////////////////////////

	if ((x > 1) && (checkVisited[x - 1][y] <= tolerance) && (y>1)) //checking whether each direction is a valid space to move
		L = 1;
	else
		L = 0;
	if ((y > 1) && (checkVisited[x][y - 1] <= tolerance))
		U = 1;
	else
		U = 0;
	if ((x < X - 1) && (checkVisited[x + 1][y] <= tolerance) && (y>1))
		R = 1;
	else
		R = 0;
	if ((y < Y - 1) && (checkVisited[x][y + 1] <= tolerance))
		D = 1;
	else
		D = 0;

	int* possible = new int[4]; //we return the information as an array of size 4
	possible[0] = U;
	possible[1] = L;
	possible[2] = D;
	possible[3] = R;
	return possible;

	pickDir(possible);
}

int pickDir(int *possible)
{
	int sum = 0;
	for (int i = 0;i < 4; i++)
		sum += possible[i]; //sums all valid directions

	int check = (rand() % sum); //picks a random value between 0 and [number of valid directions]

	for (int j = 0; j < 4; j++) { //interperets the value found above--if direction 2, for example, were 0 (invalid), this skips it
		check += possible[j];
		if (check == sum)
			return j;
	}
}

void mapGen(int** checkWall, int** checkVisited, int X, int Y)
{
	int x = 0, y = 1, tolerance = 0; //x and y are the starting coordinates of the path through the maze
	int sum = 0;
	Coords temp;
	temp.setCoords(1, 0);
	stack<Coords> coordinates;
	coordinates.push(temp);


	while (!coordinates.empty()) { //continues the loop until the stack is emptied
								   //////////////////////////////////////////////////
		cout << "size of stack:   " << coordinates.size() << endl;
		mapgen << "size of stack:  " << coordinates.size() << endl;
		/////////////////////////////////////////////////
		int* possible = checkAvail(coordinates.top(), checkVisited, X, Y, tolerance); //ptr to the array of size 4 that contains the four directions' validity
		sum = 0;
		for (int i = 0; i < 4; i++)
		{
			sum += possible[i]; //sets sum to the total number of choices
		}
		////////////////////////////////////
		Coords test = coordinates.top();
		int testX = test.getX();
		int testY = test.getY();
		mapgen << "options: " << sum << "     coords: " << testX << "      " << testY << endl;
		///////////////////////////////////////

		if (sum == 0) { //executes if there are no choices at the current location (dead end)
			coordinates.pop(); //pops the top layer off the stack
			tolerance = 1; //allows checkAvail to evaluate to true even if the location has been visited once before (allows the making of intersections
						   /////////////////////////////////////////
			mapgen << "pop" << endl;
						   /////////////////////////////////////////
			continue; //back up to beginning of the while loop
		}
		tolerance = 0; //for checkAvail on the next run through the loop
		temp = coordinates.top(); //local variables for the x- and y-coordinates of the current location
		x = temp.getX();
		y = temp.getY();
		int Picked = pickDir(possible);
		//////////////////////////
		mapgen << "direction:" << Picked << endl;
		/////////////////////////
		if (x > 0)							//updates checkVisited now that we've moved
			checkVisited[x - 1][y] ++;		//
		if (x < X - 2)						//
			checkVisited[x + 1][y] ++;		//
		if (y > 0)							//
			checkVisited[x][y - 1] ++;		//
		if (y < Y - 2)						//
			checkVisited[x][y + 1] ++;		//

		switch (Picked)			//moves us to the next location
		{						//
		case 0: { //up			//
			y--;				//
			break;				//
		}					//
		case 1: { //left		//
			x--;				//
			break;				//
		}					//
		case 2: { //down		//
			y++;				//
			break;				//
		}					//
		case 3: { //right		//
			x++;				//
			break;				//
		}					//
		}
		temp.setCoords(x, y);	//puts the new location into a Coords object
		coordinates.push(temp);	//adds the new location to the stack
		checkWall[x][y] = 0;	//makes the new location a space
		checkVisited[x][y] += 2;//sets it to "double visited," so it can never be visited again
	}
}