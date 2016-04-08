//Cassadie Moore
//The course class

#include "Course.cpp"

//disclaimer: I accidentally broke it somewhere and it keeps throwing errors at me that I can't interpret :(
int main()
{
	Course math;

	//Students
	string Maria;
	string Evan;
	string Jase;

	math.addStudent(Maria);
	math.addStudent(Evan);
	math.addStudent(Jase);
	math.dropStudent(Evan);

	math.getStudents();

	return 0;
}