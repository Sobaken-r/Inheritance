#include "President.h"
#include <Windows.h>
#include <iostream> 
using namespace std;

void President::setPeople(int people)
{
	this->people = people;
}

int President::getPeople() const
{
	return people;
}

void President::Print() const
{
	Emloyee::Print();
	cout << "Subordinate people: " << people << endl;
}
