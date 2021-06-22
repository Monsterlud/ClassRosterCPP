#include <iostream>
#include <string>
using namespace std;

//#include "degree.h"
#include "student.h"
#include "roster.h"

int main() 
{
	string searchID;
	const int NUM_STUDENTS = 5;
	

	const string studentData[NUM_STUDENTS] = 
	{
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Douglas,Monsalud,dmonsalud@gmail.com,35,23,22,14,SOFTWARE"
	};

	
	cout << "C867: Scripting and Programming - Applications" << endl;
	cout << "Programming Language: C++" << endl;
	cout << "WGU Student ID: #001126179" << endl;
	cout << "Douglas Monsalud" << endl << endl;

	roster classRoster;
	
	for (int i = 0; i < NUM_STUDENTS; ++i)
	
	{
			int rhs = studentData[i].find(",");
			string ID = studentData[i].substr(0, rhs);

			int lhs = rhs + 1;
			rhs = studentData[i].find(",", lhs);
			string firstName = studentData[i].substr(lhs, rhs - lhs);

			lhs = rhs + 1;
			rhs = studentData[i].find(",", lhs);
			string lastName = studentData[i].substr(lhs, rhs - lhs);

			lhs = rhs + 1;
			rhs = studentData[i].find(",", lhs);
			string email = studentData[i].substr(lhs, rhs - lhs);

			lhs = rhs + 1;
			rhs = studentData[i].find(",", lhs);
			int age = stoi(studentData[i].substr(lhs, rhs - lhs));

			lhs = rhs + 1;
			rhs = studentData[i].find(",", lhs);
			int t1 = stoi(studentData[i].substr(lhs, rhs - lhs));

			lhs = rhs + 1;
			rhs = studentData[i].find(",", lhs);
			int t2 = stoi(studentData[i].substr(lhs, rhs - lhs));

			lhs = rhs + 1;
			rhs = studentData[i].find(",", lhs);
			int t3 = stoi(studentData[i].substr(lhs, rhs - lhs));

			lhs = rhs + 1;
			rhs = studentData[i].find(",", lhs);
			DegreeProgram degProg;
			if (studentData[i].back() == 'K')
			{
				degProg = NETWORK;
			}
			else if (studentData[i].back() == 'Y')
			{
				degProg = SECURITY;
			}
			else if (studentData[i].back() == 'E')
			{
				degProg = SOFTWARE;
			}
			else {
				degProg = UNDECIDED;
			}

			classRoster.add(ID, firstName, lastName, email, age, t1, t2, t3, degProg);

		}
	

//PSEUDOCODE SECTION: **************************************************************

	classRoster.printAll();
	classRoster.printInvalidEmails();

	
	
	for (int i = 0; i < NUM_STUDENTS; ++i) 
	{
		searchID = classRoster.classRosterArray[i]->getStudentID();
		classRoster.printAvgDaysInCourse(searchID);
	}
	

	classRoster.printByDegreeProgram(SOFTWARE);


	classRoster.remove("A3");
	classRoster.printAll();					//this time, A3 is missing
	classRoster.remove("A3");				//this should give message "student with this ID not found"




	return 0;
}
