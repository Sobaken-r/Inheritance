#pragma once
#include <Windows.h>
#include <iostream>
using namespace std;

class Student
{
protected:
	string name;
	int age;
	int course;
	float avg;
public:
	Student(string name = "Name", int age = 0, int course = 0, float avg = 0) : name{ name }, age{ age }, course{ course }, avg{ avg } {};

	void setName(string name);
	void setAge(int age);
	void setCourse(int course);
	void setAVG(float avg);

	string getName() const;
	int getAge() const;
	int getCourse() const;
	float getAVG() const;

	void Print() const;
};

