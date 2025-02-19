#include "Worker.h"
#include <Windows.h>
#include <iostream>
using namespace std;

void Worker::setWorkingHours(int working_hours)
{
    this->working_hours = working_hours;
}

int Worker::getWorkingHours() const
{
    return working_hours;
}

void Worker::Print() const
{
    Emloyee::Print();
    cout << "Working hours: " << working_hours << endl;
}
