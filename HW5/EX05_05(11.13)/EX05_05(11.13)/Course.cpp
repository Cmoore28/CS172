#include "Course.h"

Course::Course()//no arg constructor, initializes a new course
{
	numberOfStudents = 0;
	capacity = 10;
	new_cap = 10;
	students = new string[capacity];
}

void Course::clear()//clears out all the students in the course
{
	delete[] students;
}

string Course::getCourseName()//returns the course name
{
	return course_name;
}

void Course::addStudent(const string& name)//adds a student
{
	if (numberOfStudents < new_cap)//this checks if the class is full, if not then we add the student
	{
		students[numberOfStudents] = name;
		numberOfStudents++;
	}
	else//if the course was full, it won't be for long because now we're gonna throw twice as many students at that poor teacher
	{
		increase_capacity();
		students[numberOfStudents] = name;
	}
}

string* Course::increase_capacity()//doubles the capacity of the course
{
	int new_cap = (capacity * 2);//doubles the capacity
	string* holder = new string[new_cap];//holds onto the current students
	for (int i = 0; i < capacity; i++)//puts the current students in a temporary holding cell type deal
	{
		holder[i] = students[i];
	}
	delete[] students;//delete the small "classroom"
	students = holder;//sets the "classroom" equal to the now twice as large "classroom"
	return students;
}

void Course::dropStudent(const string& name)//drops a student
//in all reality there was probably a better way to do this, but oh well. I think this works
{
	string* temp;//a temporary holding cell
	for (int i = 0; i < numberOfStudents; i++)
	{
		
		if (students[i] != name)/*checks to see if there is a student with this name,
								if not, then we place that student in the holding cell.
								All students that don't match the name given are put into\
								the holding cell and then transfered somewhere else without
								notifying the specified student. Thus that poor student is 
								left behind.*/
		{
			temp[i] = students[i];
		}
	}
	delete[] students;//This is the transfer without notifying the specified student
	students = temp;
}

string* Course::getStudents() const//returns the students
{
	return students;
}

int Course::getNumberOfStudents() const//returns the number of students
{
	return numberOfStudents;
}