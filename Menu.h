#include "WorkingStudent.h"
class Menu
{
private:
	int size;
	Person **arr;
public:
	Menu() :size(0), arr(NULL) {};
	/*
	~Menu()
	{
		if (size)
		{
			for (int i = 0; i < size; i++)
				delete arr[i];
			delete[] arr;
		}
	};
	*/
	Menu& operator +=(Person* newp)
	{
		Person ** temp;
		temp = new Person*[++size];
		for (int i = 0; i < size - 1; i++)
			temp[i] = arr[i];
		temp[size - 1] = newp;
		delete[] arr;
		arr = temp;
		return *this;
	}


	Person* inputPerson()
	{
		int choice, age, average;
		string name, institute;
		long id;
		float salary;
		bool same_institute;
		Person *help=NULL;
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
			help = new Student(name, age, id, average, institute);
		}
		else if (choice == 2)
		{
			cout << "Enter salary: ";
			cin >> salary;
			help = new Employee(name, age, id, salary);
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
			help = new WorkingStudent(name, age, id, average, institute, salary, same_institute);
		}
		
		return help;
	}
	void init()
	{
		int count;
		cout << "How many persons: ";
		cin >> count;
		for (int i = 0; i < count; )
		{
			Person* help = inputPerson();
			if (help)
			{
				(*this) += help;
				i++;
			}
		}

	} 

	void print() 
	{ 
		for (int i = 0; i < this->size; i++)
		{
			arr[i]->print();
		}
	};
};



