#include "Aspirant.h"
#include <Windows.h>
#include <iostream>
using namespace std;

void Aspirant::setNameProject(string name_project)
{
    this->name_project = name_project;
}

void Aspirant::setReadiness(bool readiness)
{
    this->readiness = readiness;
}

string Aspirant::getNameProject() const
{
    return string(name_project);
}

bool Aspirant::getReadiness() const
{
    return readiness;
}

void Aspirant::Print() const
{
    string str = readiness ? "True" : "False";
    cout << endl;
    Student::Print();
    cout << "Name project: " << name_project << endl;
    cout << "Readiness: " << str << endl;
    cout << endl;
}
