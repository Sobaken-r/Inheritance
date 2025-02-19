#include "Emloyee.h"
#include <Windows.h>
#include <iostream>
using namespace std;

void Emloyee::setName(string name)
{
    this->name = name;
}

void Emloyee::setAge(int age)
{
    this->age = age;
}

void Emloyee::setSalary(int salary)
{
    this->salary = salary;
}

string Emloyee::getName() const
{
    return string(name);
}

int Emloyee::getAge() const
{
    return age;
}

int Emloyee::getSalary() const
{
    return salary;
}

void Emloyee::Print() const
{
    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl;
}
