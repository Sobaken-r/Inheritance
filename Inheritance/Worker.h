#pragma once
#include <Windows.h>
#include <iostream>
#include "Emloyee.h"
using namespace std;

class Worker : public Emloyee
{
	int working_hours;
public:
	Worker(string name = "Name", int age = 0, int salary = 0, int working_hours = 0) :
		Emloyee{ name, age, salary }, working_hours{ working_hours } {
	};
	void setWorkingHours(int working_hours);

	int getWorkingHours() const;

	void Print() const;
};

