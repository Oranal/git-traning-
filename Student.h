#pragma once
#include "Person.h"
class Student : virtual public Person
{
protected:
	int average;
	string institute;
public:
	Student(string name, int age, long id, int average = 0, string institute = "\0") :Person(name, age, id),average(average)
	{
		if (institute.length() > 11)
		{
			do
			{
				cout << "Please re-enter the institute name: " << endl;
				cin >> institute;
			} while (institute.length() > 11);
		}
		this->institute = institute;
	};
	virtual void print()const { Person::print(); cout <<"Average: "<<average<< "\nInstitute: " << institute << endl; };
};

