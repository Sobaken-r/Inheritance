#include <Windows.h>
#include <iostream>
#include "Manager.h"
using namespace std;
void Manager::setCounterProject(int counter_project)
{
    this->counter_project = counter_project;
}

int Manager::getCounterProject() const
{
    return counter_project;
}

void Manager::Print() const
{
    Emloyee::Print();
    cout << "Quantity of project: " << counter_project << endl;
}
