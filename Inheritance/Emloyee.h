#pragma once
#include <Windows.h>
#include <iostream>
using namespace std;

class Emloyee
{
protected:
	string name;
	int age;
	int salary;
public:
	Emloyee(string name = "Name", int age = 0, int salary = 0) :name{ name }, age{ age }, salary{ salary } {};

	void setName(string name);
	void setAge(int age);
	void setSalary(int salary);

	string getName() const;
	int getAge() const;
	int getSalary() const;

	void Print() const;
};

