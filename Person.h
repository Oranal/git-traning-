#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef PERSON
#define PERSON
#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
	string Name;
	int Age;
	long ID;
public:
	Person(string name = "\0", int age = 0, long id = 0) :  Age(age),ID(id) 
	{
		if (name.length() > 11)
		{
			do
			{
				cout << "Please re-enter the name: "<<endl;
				cin >> name;
			} while (name.length() > 11);
		}
		Name = name;
	};
	virtual void print()const
	{
		cout << "\n\nNAME: " << Name<<endl<<"Age: "<<Age << endl << "ID: " << this->ID << endl;
	}
};

#endif //!PERSON