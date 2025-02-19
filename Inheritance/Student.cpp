#include "Student.h"
#include <Windows.h>
#include <iostream>
using namespace std;

void Student::setName(string name)
{
    this->name = name;
}

void Student::setAge(int age)
{
    this->age = age;
}

void Student::setCourse(int course)
{
    this->course = course;
}

void Student::setAVG(float avg)
{
    this->avg = avg;
}

string Student::getName() const
{
    return string(name);
}

int Student::getAge() const
{
    return age;
}

int Student::getCourse() const
{
    return course;
}

float Student::getAVG() const
{
    return avg;
}

void Student::Print() const
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Course: " << course << endl;
    cout << "Average rating: " << avg << endl;
}
