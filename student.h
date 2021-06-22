#pragma once
#include<string>
using namespace std;
#include "degree.h"

const int NUM_ELEMENTS = 3;

class student 
{

private:
	string studentID;
	string studentFirstName;
	string studentLastName;
	string studentEmail;
	int	studentAge;
	int daysInCourse[NUM_ELEMENTS];
	DegreeProgram degree;


public:
	
	//CONSTRUCTORS:
	student();
	student(string ID, string firstName, string lastName, string email, int age, int days[], DegreeProgram degreeVal);

	//GETTER FUNCTIONS:
	string getStudentID();
	string getStudentFirstName();
	string getStudentLastName();
	string getStudentEmail();
	int getStudentAge();
	int* getDaysInCourse();
	DegreeProgram getDegreeProgram();

	//SETTER FUNCTIONS:
	void setStudentID(string ID);
	void setStudentFirstName(string firstName);
	void setStudentLastName(string lastName);
	void setStudentEmail(string email);
	void setStudentAge(int age);
	void setDaysInCourse(int days[]);
	void setDegreeProgram(DegreeProgram degreeVal);
	void print(); 

	//DESTRUCTOR:
	~student();
};
