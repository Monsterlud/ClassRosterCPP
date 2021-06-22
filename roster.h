#pragma once
#include <iostream>
#include <string>

using namespace std;

#include "roster.h"
#include "student.h"

const int NUM_STUDENTS = 5;

class roster 
{
private:
	int lastIndex = -1;
	

public:
	student* classRosterArray[5] = { nullptr };

	void add(string ID, string firstName, string lastName, string email, int age, int days1, int days2, int days3, DegreeProgram degprog); 
	void remove(string ID);									
	void printAll();										
	void printAvgDaysInCourse(string ID);					
	void printInvalidEmails();								
	void printByDegreeProgram(DegreeProgram degProg);	
	
	~roster();
};


