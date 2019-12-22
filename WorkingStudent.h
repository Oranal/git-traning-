#pragma once
#include "Student.h"
#include "Employee.h"
class WorkingStudent :  public Employee, public Student
{
private:
	bool same_institute;
public:
	WorkingStudent(string name, int age, long id, int average, string Sinstitute , float salary , bool same_institute):Person(name,age,id),Student(name,age,id,average,Sinstitute),Employee(name,age,id,salary),same_institute(same_institute){};
	~WorkingStudent();
	void print()const {
		Person::print();  cout << "Average: " << average << "\nSalary: " << salary << "\nInstitute: " << institute << endl;
	if (same_institute)
		cout << "Working at: " << institute;
	else
		cout << "Not working at: " << institute;
	cout << endl;
	};
};

