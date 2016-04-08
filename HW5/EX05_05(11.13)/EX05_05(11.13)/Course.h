#pragma once
#ifndef COURSE_H_
#define COURSE_H_

#include <iostream>
#include <string>

using namespace std;

class Course
{
private:
	string course_name;
	int capacity;
	string* students;
	int numberOfStudents;
	int new_cap;

public:
	Course();//no arg constructor
	void clear();//clears out all the students in the course
	string getCourseName();//returns the course name
	void addStudent(const string& name);//adds a student to the course
	string* increase_capacity();//doubles the capacity of the course, which in real life would suck major moneky butt as a teacher
	void dropStudent(const string& name);//drops a student from the course
	string* getStudents() const;//returns the students in the course
	int getNumberOfStudents() const;//returns the number of students in the course
};

#endif
