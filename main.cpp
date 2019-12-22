#include "Menu.h"

int main()
{
	/*
	int amount, choice, age,average;
	string name, institute;
	long id;
	float salary;
	bool same_institute;
	cout << "How many person: ";
	cin >> amount;
	Person **arr = new Person*[amount];
	for (int i = 0; i < amount; i++)
	{
		do 
		{
			cout << "For Student press 1.\nFor Employee press 2.\nFor Working Student press 3.";
			cin >> choice;
		} while (choice != 1 && choice != 2 && choice != 3);

		cout << "Enter name: ";
		cin >> name;
		cout << "Enter id: ";
		cin >> id;
		cout << "Enter age: ";
		cin >> age;
		if (choice == 1)
		{
			cout << "Enter average: ";
			cin >> average;
			cout << "Enter institute: ";
			cin >> institute;
			arr[i] = new Student (name, age, id, average, institute);
		}
		else if (choice == 2)
		{
			cout << "Enter salary: ";
			cin >> salary;
			arr[i]=new Employee(name, age, id, salary);
		}
		else
		{
			cout << "Enter average: ";
			cin >> average;
			cout << "Enter institute: ";
			cin >> institute;
			cout << "do you work there?(1/0) ";
			cin >> same_institute;
			cout << "Enter salary: ";
			cin >> salary;
			arr[i] = new WorkingStudent(name, age, id, average, institute,salary,same_institute);
		}
	}
	for (int i = 0; i < amount; i++)
	{
		if (arr[i])
			delete arr[i];
	}
	delete[] arr;
	*/
	Menu a;
	a.init();
	a.print();
	return 0;
}