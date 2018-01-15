#include "Abiturient.h"
#include "Documents.h"
#include <string>
#include <iostream>
using namespace std;

Abiturient::Abiturient()
{
	cout << "\nAbiturient class constructor has been initialised\n" << endl;
	setAbiturientInfo();
	
	
}

Abiturient::~Abiturient()
{
	cout << "Abiturient class destructor has been initialised" << endl;
}

string Abiturient::getAbiturientInfo()
{
	return name + " " + surname + " " + group;
}

void Abiturient::setAbiturientInfo()
{
	int facltyVectorSize;

	cout << "Enter abiturient name: ";
	cin >> name;

	cout << "Enter abiturient surname: ";
	cin >> surname;

	cout << "Enter abiturient group: ";
	cin >> group;

	cout << "Enter the amount of faculties that the applicant wants to enroll: ";
	cin >> facltyVectorSize;

	chosenFaculty.resize(facltyVectorSize);
	chosenFaculty = setChosenFaculty(facltyVectorSize);
}

vector<int> Abiturient::setChosenFaculty(const int n)
{
	vector<int> vec;
	int facultyId;
	string output;

	vec.resize(n);

	for (int i = 0; i < n; i++)
	{		
		cout << "Enter " + to_string(i + 1) + " chosen faculty: \n 1 - Faculty1\n 2 - Faculty2\n 3 - Faculty3\n 4 - Faculty4" << endl;
		cin >> facultyId;
		vec.push_back(facultyId);
	}

	return vec;
}

