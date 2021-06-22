#include <iostream>
#include <string>
using namespace std;

#include "roster.h"

//DESTRUCTOR***************************************************************
roster::~roster() 
{
	for (int i = 0; i <= lastIndex; ++i)
	{
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}
} 

//FUNCTIONS****************************************************************

void roster::add(string ID, string firstName, string lastName, string email, int age, int days1, int days2, int days3, DegreeProgram degProg) 
{
	lastIndex++;
	int tempArray[3] = { days1, days2, days3 };
	classRosterArray[lastIndex] = new student(ID, firstName, lastName, email, age, tempArray, degProg);
}

void roster::remove(string ID) 
{
	bool found = false;
	for (int i = 0; i < lastIndex + 1; ++i) 
	{
		if (this->classRosterArray[i]->getStudentID() == ID) 
		{
			delete classRosterArray[i];
			classRosterArray[i] = classRosterArray[lastIndex];
			classRosterArray[lastIndex] = nullptr;
			lastIndex--;
			found = true;
		}
	}
	if (!found)
	{
		cout << "student with ID " << ID << " not found";
	}
	cout << endl;
}

void roster::printAll() 
{
	cout << "print all:" << endl;
	for (int i = 0; i < lastIndex + 1; ++i) 
	{
		this->classRosterArray[i]->print();
	}
	cout << endl;
}

void roster::printAvgDaysInCourse(string ID) 
{
	int avgVal = 0;
	
	for (int i = 0; i < lastIndex + 1; ++i) 
	{
		
		if (this->classRosterArray[i]->getStudentID() == ID) {
			avgVal += (this->classRosterArray[i]->getDaysInCourse()[0]
				+ this->classRosterArray[i]->getDaysInCourse()[1]
				+ this->classRosterArray[i]->getDaysInCourse()[2]) / 3;
		}
		
	}
	cout << "Student " << ID << " - Average days in course: " << avgVal << endl;

	cout << endl;
}

void roster::printInvalidEmails() 
{
	string stringToSearch = "";

	for (int i = 0; i < lastIndex + 1; ++i) 
	{
		stringToSearch = this->classRosterArray[i]->getStudentEmail();
		if (stringToSearch.find('@') == string::npos ||
			stringToSearch.find('.') == string::npos ||
			stringToSearch.find(' ') != string::npos)

			cout << "Invalid Email: " << stringToSearch << endl;

	}
	cout << endl;
}

void roster::printByDegreeProgram(DegreeProgram degProg) 
{
	cout << "printing by degree program:" << endl;
	for (int i = 0; i < lastIndex + 1; ++i) 
	{
		if (degProg == this->classRosterArray[i]->getDegreeProgram()) 
		{
			classRosterArray[i]->print();
		}
	}
	cout << endl;
}
	

