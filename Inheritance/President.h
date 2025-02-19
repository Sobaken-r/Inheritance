#pragma once
#include <Windows.h>
#include <iostream> 
#include "Emloyee.h"
using namespace std;

class President : public Emloyee
{
	int people;
public:
	President(string name = "Name", int age = 0, int salary = 0, int people = 1) :
		Emloyee{ name, age, salary }, people{ people } {
	};

	void setPeople(int people);

	int getPeople() const;

	void Print() const;
};

