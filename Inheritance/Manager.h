#pragma once
#include <Windows.h>
#include <iostream>
#include "Emloyee.h"
using namespace std;

class Manager : public Emloyee
{
	int counter_project;
public:
	Manager(string name = "Name", int age = 0, int salary = 0, int counter_project = 0) :
		Emloyee{ name, age, salary }, counter_project{ counter_project } {
	};

	void setCounterProject(int counter_project);

	int getCounterProject() const;

	void Print() const;
};

