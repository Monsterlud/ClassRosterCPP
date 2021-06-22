#include <iostream>
using namespace std;

#include "student.h"

//CONSTRUCTORS/DESTRUCTOR*************************************************
student::student() 
{
	
	studentID = "";
	studentFirstName = "";
	studentLastName = "";
	studentEmail = "";
	studentAge = 0;

	for (int i = 0; i < NUM_ELEMENTS; ++i) {
		daysInCourse[i] = 0;
	}

	degree = UNDECIDED;
}

//CONSTRUCTORS/DESTRUCTOR***********************************************************

student::student(string ID, string firstName, string lastName, string email, int age, int days[], DegreeProgram degProg) 
{

	studentID = ID;
	studentFirstName = firstName;
	studentLastName = lastName;
	studentEmail = email;
	studentAge = age;

	for (int i = 0; i < NUM_ELEMENTS; ++i) 
	{
		daysInCourse[i] = days[i];
	}
	degree = degProg;
}


student::~student() 
{
//destructor body not necessary since nothing has been declared dynamically...nothing on the heap
}


	
//(ACCESSOR) GETTER FUNCTIONS*******************************************************

string student::getStudentID() 
{
	return studentID;
}
string student::getStudentFirstName() 
{
	return studentFirstName;
}
string student::getStudentLastName() 
{
	return studentLastName;
}
string student::getStudentEmail() 
{
	return studentEmail;
}
int student::getStudentAge() 
{
	return studentAge;
}
int* student::getDaysInCourse() 
{
	return daysInCourse;
}
DegreeProgram student::getDegreeProgram() 
{
	return degree;
}

//(MUTATOR) SETTER FUNCTIONS*********************************************************

void student::setStudentID(string ID) 
{
	studentID = ID;
	return;
}
void student::setStudentFirstName(string firstName) 
{
	studentFirstName = firstName;
	return;
}
void student::setStudentLastName(string lastName) 
{
	studentLastName = lastName;
	return;
}
void student::setStudentEmail(string email) 
{
	studentEmail = email;
	return;
}
void student::setStudentAge(int age) 
{
	studentAge = age;
	return;
}
void student::setDaysInCourse(int days[]) 
{
	for (int i = 0; i < NUM_ELEMENTS; ++i) {
		daysInCourse[i] = days[i];
	}
}
void student::setDegreeProgram(DegreeProgram degreeVal) 
{
	DegreeProgram degree = degreeVal;
}

void student::print() 
{
	cout << "ID: " << studentID;
	cout << "\tFirst Name: " << studentFirstName;
	cout << "\tLast Name: " << studentLastName;
	cout << "\tEmail: " << studentEmail;
	cout << "\tAge: " << studentAge;
	cout << "\tDays in course: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}";
	cout << "\tDegree Program: ";
		if (degree == SECURITY) 
		{
			cout << "SECURITY";
		}
		else if (degree == NETWORK)
		{
			cout << "NETWORK";
		}
		else if (degree == SOFTWARE) 
		{
			cout << "SOFTWARE";
		}
		else
		{
			cout << "UNDECIDED";
		}
		cout << endl;
}

	

