#pragma once
#include "Manager.h"
class Department
{
private: 
	string name;
	Manager deptManager; 

public:
	void setName(string n);
	string getName();

	void setManager(Manager m);

	Manager getManager();

	Department(string n, Manager m);
};

