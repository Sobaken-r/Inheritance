#pragma once
#include <Windows.h>
#include <iostream>
#include "Student.h"
using namespace std;

class Aspirant : public Student
{
	string name_project;
	bool readiness;
public:
	Aspirant(string name = "Name", int age = 0, int course = 0, float avg = 0, string name_project = "NoName", bool readiness = false) :
		Student{ name, age, course, avg }, name_project{ name_project }, readiness{ readiness } {
	};

	void setNameProject(string name_project);
	void setReadiness(bool readiness);

	string getNameProject() const;
	bool getReadiness() const;

	void Print() const;
};

