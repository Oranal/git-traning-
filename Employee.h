#pragma once
#include "Person.h"
class Employee : virtual public Person
{
protected:
	float salary;
public:
	Employee(string name, int age, long id, float salary = 0) :Person(name, age, id), salary(salary) {};
	float getsalary() { return this->salary; };
	virtual void print()const { Person::print(); cout << "Salary: " << salary << endl; };
};

